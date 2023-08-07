#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

int main() /* check_upper_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = softsign(x);
	
	__ESBMC_assert(isgreaterequal(y, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
