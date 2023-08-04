#include <math.h>

float elu(float x)
{
	if(x >= 0.0f)
		return x;
	else
		return expf(x) - 1.0f;
}

int main() /* check_negative_asymptote */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = elu(x);
	
	__ESBMC_assert(isgreaterequal(y, -1.0f), ""); /* Expected result: verification successful */

    return 0;
}