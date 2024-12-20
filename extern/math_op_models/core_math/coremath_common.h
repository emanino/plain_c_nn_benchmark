#ifndef COREMATH_COMMON_H
#define COREMATH_COMMON_H

#include <errno.h>

typedef union {float f; uint32_t u;} b32u32_u;
typedef union {double f; uint64_t u;} b64u64_u;
typedef uint64_t u64;
typedef unsigned __int128 u128;

static const double b[] =
  {0x1.3bd3cc9be45dcp-6, -0x1.03c1f081b0833p-14, 0x1.55d3c6fc9ac1fp-24, -0x1.e1d3ff281b40dp-35};
static const double a[] =
  {0x1.921fb54442d17p-3, -0x1.4abbce6256a39p-10, 0x1.466bc5a518c16p-19, -0x1.32bdc61074ff6p-29};
static const double tb[] =
  {0x0p+0, 0x1.8f8b83c69a60bp-3, 0x1.87de2a6aea963p-2, 0x1.1c73b39ae68c8p-1,
   0x1.6a09e667f3bcdp-1, 0x1.a9b66290ea1a3p-1, 0x1.d906bcf328d46p-1, 0x1.f6297cff75cbp-1,
   0x1p+0, 0x1.f6297cff75cbp-1, 0x1.d906bcf328d46p-1, 0x1.a9b66290ea1a3p-1,
   0x1.6a09e667f3bcdp-1, 0x1.1c73b39ae68c8p-1, 0x1.87de2a6aea963p-2, 0x1.8f8b83c69a60bp-3,
   0x0p+0, -0x1.8f8b83c69a60bp-3, -0x1.87de2a6aea963p-2, -0x1.1c73b39ae68c8p-1,
   -0x1.6a09e667f3bcdp-1, -0x1.a9b66290ea1a3p-1, -0x1.d906bcf328d46p-1, -0x1.f6297cff75cbp-1,
   -0x1p+0, -0x1.f6297cff75cbp-1, -0x1.d906bcf328d46p-1, -0x1.a9b66290ea1a3p-1,
   -0x1.6a09e667f3bcdp-1, -0x1.1c73b39ae68c8p-1, -0x1.87de2a6aea963p-2, -0x1.8f8b83c69a60bp-3};

static __attribute__((noinline)) float as_special(float x){
  const float pih = 0x1.921fb6p+1, pil = -0x1p-24f;
  b32u32_u t = {.f = x};
  if(t.u == (0x7fu<<23)) return 0.0f; // x=1
  if(t.u == (0x17fu<<23)) return pih + pil;  // x=-1
  uint32_t ax = t.u<<1;
  if(ax>(0xffu<<24)) return x; // nan
  errno = EDOM;
  return 0.0f/0.0f; // to raise FE_INVALID
}

static double poly12(double z, const double *c){
  double z2 = z*z, z4 = z2*z2;
  double c0 = c[0] + z*c[1];
  double c2 = c[2] + z*c[3];
  double c4 = c[4] + z*c[5];
  double c6 = c[6] + z*c[7];
  double c8 = c[8] + z*c[9];
  double c10 = c[10] + z*c[11];
  c0 += c2*z2;
  c4 += c6*z2;
  c8 += z2*c10;
  c0 += z4*(c4 + z4*c8);
  return c0;
}

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

static unsigned plain_clz(uint32_t x)
{
    //if(x == 0) return 32;
    unsigned clz = 32;
    if(x & 0xFFFF0000) {
        x >>= 16;
        clz -= 16;
    }
    if(x & 0xFF00) {
        x >>= 8;
        clz -= 8;
    }
    if(x & 0xF0) {
        x >>= 4;
        clz -= 4;
    }
    if(x & 0xC) {
        x >>= 2;
        clz -= 2;
    }
    if(x & 0x3) {
        x >>= 1;
        clz -= 1;
    }
    return clz - x;
}

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

#endif
