#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && !isinf(x));
	
	float y = softsign(x);
	float z = -softsign(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification successful */

    return 0;
}
