#include <math.h>

float logistic(float x)
{
	return 0.5f * tanh(0.5f * x) + 0.5f;
}

#define LOGISTIC_CHECK_NEXT 1e-5f
#define LOGISTIC_CHECK_RANGE 10.0f
#define LOGISTIC_CHECK_ERROR 1e-10f

int main() /* check_symmetry */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0));
	
	float y = logistic(x);
	float z = 1.0f - logistic(-x); /* Almost identical, except for subnormal numbers and rounding errors */
	
	__ESBMC_assert(y == z, ""); /* Expected result: verification failure */

    return 0;
}
