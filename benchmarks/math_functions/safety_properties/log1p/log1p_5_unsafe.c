#include <verifier_functions.h>

#include <math.h>

#define LOG1P_CHECK_RANGE 3.4e38f
#define LOG1P_CHECK_ERROR 1e-7f

int main() /* check_inverse */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -1.0f) && islessequal(x, LOG1P_CHECK_RANGE));
	
	float y = expm1f(log1pf(x));
	float r = fabsf(x - y) / (fabsf(x) + 1e-37f); /* relative error: avoid division by zero */
	
	__VERIFIER_assert(islessequal(r, LOG1P_CHECK_ERROR)); /* Expected result: verification failure */

    return 0;
}
