#include <verifier_functions.h>

#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

#define SOFTPLUS_CHECK_LOG2 0.6931471805599453094172321214581765680755001343602552541206800094f
#define SOFTPLUS_CHECK_ERROR 1e-7f

int main() /* check_affine_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = softplus(x);
	float z = 0.5f * x + SOFTPLUS_CHECK_LOG2 - SOFTPLUS_CHECK_ERROR; /* Tangent function at x = 0 */
	
	__VERIFIER_assert(isgreaterequal(y, z)); /* Expected result: verification successful */

    return 0;
}
