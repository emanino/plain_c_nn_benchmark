#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

#define SOFTPLUS_CHECK_LOG2 0.6931471805599453094172321214581765680755001343602552541206800094f

int main() /* check_affine_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = softplus(x);
	float z = 0.5f * x + SOFTPLUS_CHECK_LOG2; /* Tangent function at x = 0 */
	
	__ESBMC_assert(isgreaterequal(y, z), ""); /* Expected result: verification successful */

    return 0;
}
