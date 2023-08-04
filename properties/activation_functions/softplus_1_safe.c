#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

int main() /* check_positive_asymptote */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = softplus(x);
	
	__ESBMC_assert(isgreaterequal(y, x), ""); /* Expected result: verification successful */

    return 0;
}
