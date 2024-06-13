#include <verifier_functions.h>

#include <math.h>

float gauss(float x)
{
	return expf(-x * x / 2.0f);
}

#define GAUSSIAN_CHECK_RANGE 1e38f
#define GAUSSIAN_CHECK_NEXT 1e-3f
#define GAUSSIAN_CHECK_DIFF 1e-5f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + GAUSSIAN_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, -GAUSSIAN_CHECK_RANGE) && islessequal(x1, GAUSSIAN_CHECK_RANGE));
	
	float y1 = gauss(x1);
	float y2 = gauss(x2);
	float derivative = (y2 - y1) / GAUSSIAN_CHECK_NEXT;
	
	float d = -0.5 * (x1 + x2) * gauss(0.5 * (x1 + x2)); /* analytic derivative at avg(x1, x2) */
	float diff = fabsf(derivative - d);
	
	__VERIFIER_assert(islessequal(diff, GAUSSIAN_CHECK_DIFF)); /* Expected result: verification failure */

    return 0;
}
