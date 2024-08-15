/* Correctly-rounded cosine of binary32 value.

Copyright (c) 2022-2023 Alexei Sibidanov.

This file is part of the CORE-MATH project
(https://core-math.gitlabpages.inria.fr/).

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <math.h>
#include <stdint.h>
#include <errno.h>

// Warning: clang also defines __GNUC__
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#endif

#pragma STDC FENV_ACCESS ON

/* count number of trailing zeros by Edoardo Manino,
   adapted from Sean Eron Anderson's algorithm at:
   https://graphics.stanford.edu/~seander/bithacks.html */
static unsigned plain_ctz(uint64_t x)
{
    uint64_t lsb = x & -(int64_t) x; // isolate the least significant bit (lsb)
    unsigned ctz = 64;
    if(lsb) ctz--;
    if(lsb & 0x00000000FFFFFFFF) ctz -= 32;
    if(lsb & 0x0000FFFF0000FFFF) ctz -= 16;
    if(lsb & 0x00FF00FF00FF00FF) ctz -= 8;
    if(lsb & 0x0F0F0F0F0F0F0F0F) ctz -= 4;
    if(lsb & 0x3333333333333333) ctz -= 2;
    if(lsb & 0x5555555555555555) ctz -= 1;
    return ctz;
}

/* round x to nearest integer, breaking ties to even */
static double
plain_roundeven (double x)
{
  double y = round (x); /* nearest, away from 0 */
  if (fabs (y - x) == 0.5)
  {
    /* if y is odd, we should return y-1 if x>0, and y+1 if x<0 */
    union { double f; uint64_t n; } u, v;
    u.f = y;
    v.f = (x > 0) ? y - 1.0 : y + 1.0;
    if (plain_ctz (v.n) > plain_ctz (u.n))
      y = v.f;
  }
  return y;
}

typedef union {float f; uint32_t u;} b32u32_u;
typedef union {double f; uint64_t u;} b64u64_u;
typedef unsigned __int128 u128;
typedef uint64_t u64;

static double __attribute__((noinline)) rbig(uint32_t u, int64_t *q){
  static const u64 ipi[] = {0xfe5163abdebbc562, 0xdb6295993c439041, 0xfc2757d1f534ddc0, 0xa2f9836e4e441529};
  int64_t e = (u>>23)&0xff, i;
  u64 m = (u&(~0u>>9))|1<<23;
  u128 p0 = (u128)m*ipi[0];
  u128 p1 = (u128)m*ipi[1]; p1 += p0>>64;
  u128 p2 = (u128)m*ipi[2]; p2 += p1>>64;
  u128 p3 = (u128)m*ipi[3]; p3 += p2>>64;
  u64 p3h = p3>>64, p3l = p3, p2l = p2, p1l = p1;
  int64_t a;
  int64_t k = e-124, s = k-23;
  /* in cr_cosf(), rbig() is called in the case 127+28 <= e < 0xff
     thus 155 <= e <= 254, which yields 28 <= k <= 127 and 5 <= s <= 104 */
  if (s<64) {
    i = p3h<<s|p3l>>(64-s);
    a = p3l<<s|p2l>>(64-s);
  } else if(s==64) {
    i = p3l;
    a = p2l;
  } else { /* s > 64 */
    i = p3l<<(s-64)|p2l>>(128-s);
    a = p2l<<(s-64)|p1l>>(128-s);
  }
  int64_t sgn = u; sgn >>= 31;
  int64_t sm = a>>63;
  i -= sm;
  double z = (a^sgn)*0x1p-64;
  i = (i^sgn) - sgn;
  *q = i;
  return z;
}

static inline double rltl(float z, int64_t *q){
  double x = z;
  double idl = -0x1.b1bbead603d8bp-29*x, idh = 0x1.45f306ep+2*x, id = plain_roundeven(idh);
  b64u64_u Q = {.f = 0x1.8p52 + id}; *q = Q.u;
  return (idh - id) + idl;
}

static inline double rltl0(double x, int64_t *q){
  double idh = 0x1.45f306dc9c883p+2*x, id = plain_roundeven(idh);
  b64u64_u Q = {.f = 0x1.8p52 + id}; *q = Q.u;
  return idh - id;
}

static float __attribute__((noinline)) as_cosf_database(float x, double r){
  static const struct {union{float arg; uint32_t uarg;}; float rh, rl;} st[] = {
    {{0x1.2d97c8p+2}, 0x1.99bc5cp-27, -0x1p-52},
    {{0x1.4555p+51}, 0x1.115d7ep-1, -0x1p-26},
    {{0x1.48a858p+54}, 0x1.f48148p-2, 0x1p-27},
    {{0x1.3170fp+63}, 0x1.fe2976p-1, 0x1p-26},
    {{0x1.2b9622p+67}, 0x1.f0285ep-1, -0x1p-26},
  };
  b32u32_u t = {.f = x};
  uint32_t ax = t.u&(~0u>>1);
  for(unsigned i=0; i<sizeof(st)/sizeof(st[0]); i++)
    if(st[i].uarg == ax) return st[i].rh + st[i].rl;
  return r;
}

static const double b[] =
  {0x1.3bd3cc9be45dcp-6, -0x1.03c1f081b0833p-14, 0x1.55d3c6fc9ac1fp-24, -0x1.e1d3ff281b40dp-35};
static const double a[] =
  {0x1.921fb54442d17p-3, -0x1.4abbce6256a39p-10, 0x1.466bc5a518c16p-19, -0x1.32bdc61074ff6p-29};
static const double tb[] =
  {0x1p+0, 0x1.f6297cff75cbp-1, 0x1.d906bcf328d46p-1, 0x1.a9b66290ea1a3p-1,
   0x1.6a09e667f3bcdp-1, 0x1.1c73b39ae68c8p-1, 0x1.87de2a6aea963p-2, 0x1.8f8b83c69a60bp-3,
   0x0p+0, -0x1.8f8b83c69a60bp-3, -0x1.87de2a6aea963p-2, -0x1.1c73b39ae68c8p-1,
   -0x1.6a09e667f3bcdp-1, -0x1.a9b66290ea1a3p-1, -0x1.d906bcf328d46p-1, -0x1.f6297cff75cbp-1,
   -0x1p+0, -0x1.f6297cff75cbp-1, -0x1.d906bcf328d46p-1, -0x1.a9b66290ea1a3p-1,
   -0x1.6a09e667f3bcdp-1, -0x1.1c73b39ae68c8p-1, -0x1.87de2a6aea963p-2, -0x1.8f8b83c69a60bp-3,
   0x0p+0, 0x1.8f8b83c69a60bp-3, 0x1.87de2a6aea963p-2, 0x1.1c73b39ae68c8p-1,
   0x1.6a09e667f3bcdp-1, 0x1.a9b66290ea1a3p-1, 0x1.d906bcf328d46p-1, 0x1.f6297cff75cbp-1};

static float __attribute__((noinline)) as_cosf_big(float x){
  b32u32_u t = {.f = x};
  uint32_t ax = t.u<<1;
  if(ax>=0xffu<<24){ // nan or +-inf
    if(ax<<8) return x; // nan
    errno = EDOM;
    return 0.0f/0.0f; // to raise FE_INVALID
  }
  int64_t ia;
  double z = rbig(t.u, &ia);
  double z2 = z*z, z4 = z2*z2;
  double aa = (a[0] + z2*a[1]) + z4*(a[2] + z2*a[3]);
  double bb = (b[0] + z2*b[1]) + z4*(b[2] + z2*b[3]);
  double s0 = tb[(ia+8)&31], c0 = tb[ia&31];
  double r = c0 + z*(aa*s0 - bb*(z*c0));
  b64u64_u tr = {.f = r}; u64 tail = (tr.u + 6)&(~0ull>>36);
  if(tail<=12) return as_cosf_database(x, r);
  return r;
}

float cosf(float x){
  b32u32_u t = {.f = x};
  uint32_t ax = t.u<<1;
  int64_t ia;
  double z0 = x, z;
  if (ax>0x99000000u || ax<0x73000000){
    if (ax<0x73000000){
      if (ax<0x66000000u){
	if(ax==0u) return 1.0f;
	return 1.0f - 0x1p-25f;
      }
      return -0x1p-1f*x*x + 1.0f;
    }
    return as_cosf_big(x);
  }
  if(ax<0x82a41896u){
    if(ax==0x812d97c8u) return as_cosf_database(x, 0.0);
    z = rltl0(z0, &ia);
  } else {
    z = rltl(z0, &ia);
  }
  double z2 = z*z, z4 = z2*z2;
  double aa = (a[0] + z2*a[1]) + z4*(a[2] + z2*a[3]);
  double bb = (b[0] + z2*b[1]) + z4*(b[2] + z2*b[3]);
  double c0 = tb[ia&31], s0 = tb[(ia+8)&31];
  double r = c0 + aa*(z*s0) - bb*(z2*c0);
  return r;
}
