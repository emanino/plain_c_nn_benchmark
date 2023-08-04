#include <math.h>

#define SQRT_CHECK_NEXT 1e-5

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + SQRT_CHECK_NEXT;
	
	__ESBMC_assume(isgreaterequal(x1, 0.0f));
	
	float y1 = sqrtf(x1);
	float y2 = sqrtf(x2);
	
	__ESBMC_assert(isgreaterequal(y1, y2), ""); /* Expected result: verification successful */


    return 0;
}
