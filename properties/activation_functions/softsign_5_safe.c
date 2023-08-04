#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

#define FAST_SIGMOID_CHECK_NEXT 1e-5f

int main() /* check_symmetry */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0));
	
	float y = softsign(x);
	float z = softsign(-x);
	
	__ESBMC_assert(y == z, ""); /* Expected result: verification successful */

    return 0;
}
