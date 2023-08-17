#include <verifier_functions.h>

#include <math.h>

float logistic(float x)
{
	return 0.5f * tanh(0.5f * x) + 0.5f;
}

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0));
	
	float y = logistic(x);
	float z = 1.0f - logistic(-x); /* Almost identical, except for subnormal numbers and rounding errors */
	
	__VERIFIER_assert(y == z); /* Expected result: verification failure */

    return 0;
}
