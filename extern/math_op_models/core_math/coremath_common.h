#ifndef COREMATH_COMMON_H
#define COREMATH_COMMON_H

#include <stdint.h>

// used by most functions
typedef union {float f; uint32_t u;} b32u32_u;
typedef union {double f; uint64_t u;} b64u64_u;

// used by acosf and asinf
double poly12(double z, const double *c){
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

// used by expm1f

/* count number of trailing zeros by Edoardo Manino,
   adapted from Sean Eron Anderson's algorithm at:
   https://graphics.stanford.edu/~seander/bithacks.html */
unsigned plain_ctz(uint64_t x)
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

// used by atanhf and logf

/* count number of leading zeros by Edoardo Manino,
   adapted from Sean Eron Anderson's and Eugene Nalimov's algorithms at:
   https://graphics.stanford.edu/~seander/bithacks.html
   https://www.chessprogramming.org/BitScan */
unsigned plain_clz(uint32_t x)
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

// used by expm1f

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

#endif
