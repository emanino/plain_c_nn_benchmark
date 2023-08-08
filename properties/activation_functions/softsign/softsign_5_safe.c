#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

int main() /* check_symmetry */
{
	float x = nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0));
	
	float y = softsign(x);
	float z = softsign(-x);
	
	__VERIFIER_assert(y == z, ""); /* Expected result: verification successful */

    return 0;
}
