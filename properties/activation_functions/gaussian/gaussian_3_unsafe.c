#include <verifier_functions.h>

#include <math.h>

float gauss(float x)
{
	return expf(-x * x / 2.0f);
}

#define GAUSSIAN_CHECK_NEXT 1e-1f
#define GAUSSIAN_CHECK_DIFF 1e-8f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + GAUSSIAN_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1) && !isinf(x1));
	
	float y1 = gauss(x1);
	float y2 = gauss(x2);
	float derivative = (y2 - y1) / GAUSSIAN_CHECK_NEXT;
	
	float d = -x1 * gauss(x1); /* analytic derivative at x1 */
	float diff = fabsf(derivative - d);
	
	__VERIFIER_assert(isgreaterequal(diff, GAUSSIAN_CHECK_DIFF)); /* Expected result: verification failure */

    return 0;
}
