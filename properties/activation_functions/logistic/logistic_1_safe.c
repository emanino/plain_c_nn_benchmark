#include <math.h>

float logistic(float x)
{
	return 0.5f * tanh(0.5f * x) + 0.5f;
}

int main() /* check_upper_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = logistic(x);
	
	__ESBMC_assert(isgreaterequal(y, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
