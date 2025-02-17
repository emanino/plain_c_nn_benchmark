/* Correctly-rounded arc-cosine function for binary32 value.

Copyright (c) 2023 Alexei Sibidanov.

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

static __attribute__((noinline)) float as_special_acosf(float x){
  const float pih = 0x1.921fb6p+1, pil = -0x1p-24f;
  b32u32_u t = {.f = x};
  if(t.u == (0x7fu<<23)) return 0.0f; // x=1
  if(t.u == (0x17fu<<23)) return pih + pil;  // x=-1
  uint32_t ax = t.u<<1;
  if(ax>(0xffu<<24)) return x; // nan
  errno = EDOM;
  return 0.0f/0.0f; // to raise FE_INVALID
}

float cr_acosf(float x){
  const double pi2 = 0x1.921fb54442d18p+0;
  static const double o[] = {0, 0x1.921fb54442d18p+1};
  double xs = x, r;
  b32u32_u t = {.f = x};
  uint32_t ax = t.u<<1;
  if(ax>=0x7f<<24) return as_special_acosf(x);
  if(ax<0x7ec29000u){
    static const double b[] =
      {0x1.fffffffd9ccb8p-1, 0x1.5555c94838007p-3, 0x1.32ded4b7c20fap-4, 0x1.8566df703309ep-5,
       -0x1.980c959bec9a3p-6, 0x1.56fbb04998344p-1, -0x1.403d8e4c49f52p+2, 0x1.b06c3e9f311eap+4,
       -0x1.9ea97c4e2c21fp+6, 0x1.200b8261cc61bp+8, -0x1.2274c2799a5c7p+9, 0x1.a558a59cc19d3p+9,
       -0x1.aca4b6a529ffp+9, 0x1.228744703f813p+9, -0x1.d7dbb0b322228p+7, 0x1.5c2018c0c0105p+5};
    double z = xs, z2 = z*z, z4 = z2*z2, z8 = z4*z4, z16=z8*z8;
    r = z*((((b[0] + z2*b[1]) + z4*(b[2] + z2*b[3])) + z8*((b[4] + z2*b[5]) + z4*(b[6] + z2*b[7]))) +
		  z16*(((b[8] + z2*b[9]) + z4*(b[10] + z2*b[11])) + z8*((b[12] + z2*b[13]) + z4*(b[14] + z2*b[15]))));
    float ub = 0x1.921fb54574191p+0 - r, lb = 0x1.921fb543118ap+0 - r;
    if(ub==lb) return ub;
  }
  // accurate path
  if(ax<(0x7eu<<24)){
    static const double c[] =
      {0x1.555555555529cp-3, 0x1.333333337e0ddp-4, 0x1.6db6db3b4465ep-5, 0x1.f1c72e13ac306p-6,
       0x1.6e89cebe06bc4p-6, 0x1.1c6dcf5289094p-6, 0x1.c6dbbcc7c6315p-7, 0x1.8f8dc2615e996p-7,
       0x1.a5833b7bf15e8p-8, 0x1.43f44ace1665cp-6, -0x1.0fb17df881c73p-6, 0x1.07520c026b2d6p-5};
    if(t.u == 0x328885a3u) return 0x1.921fb6p+0f + 0x1p-25;
    if(t.u == 0x39826222u) return 0x1.920f6ap+0f + 0x1p-25;
    double x2 = xs*xs;
    r = (pi2 - xs) - (xs*x2)*poly12(x2, c);
  } else {
    static const double c[] =
      {0x1.6a09e667f3bcbp+0, 0x1.e2b7dddff2db9p-4, 0x1.b27247ab42dbcp-6, 0x1.02995cc4e0744p-7,
       0x1.5ffb0276ec8eap-9, 0x1.033885a928decp-10, 0x1.911f2be23f8c7p-12, 0x1.4c3c55d2437fdp-13,
       0x1.af477e1d7b461p-15, 0x1.abd6bdff67dcbp-15, -0x1.1717e86d0fa28p-16, 0x1.6ff526de46023p-16};
    double ax = fabs(xs), z = 1.0 - ax, s = copysign(sqrt(z), xs);
    r = o[t.u>>31] + s*poly12(z, c);
  }
  return r;
}
