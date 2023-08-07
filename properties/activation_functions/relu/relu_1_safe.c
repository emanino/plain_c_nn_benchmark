#include <math.h>

float relu(float x)
{
	return fmaxf(x, 0.0f);
}

int main() /* check_positive_domain */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0.0f));
	
	float y = relu(x);
	
	__ESBMC_assert(y == x, ""); /* Expected result: verification successful */

    return 0;
}
