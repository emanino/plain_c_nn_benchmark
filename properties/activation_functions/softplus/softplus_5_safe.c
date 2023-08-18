#include <verifier_functions.h>

#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

#define SOFTPLUS_CHECK_RANGE 88.0f
#define SOFTPLUS_CHECK_NEXT 1e-5f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + SOFTPLUS_CHECK_NEXT;
	
	__VERIFIER_assume(islessequal(x1, SOFTPLUS_CHECK_RANGE));
	
	float y1 = softplus(x1);
	float y2 = softplus(x2);
	float derivative = (y2 - y1) / SOFTPLUS_CHECK_NEXT;
	
	__VERIFIER_assert(isgreaterequal(derivative, 0.0f)); /* Expected result: verification successful */

    return 0;
}
