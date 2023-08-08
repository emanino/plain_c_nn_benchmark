#include <verifier_functions.h>

#include <math.h>

#define GELU_CHECK_SQRT2 1.41421356237309504880168872420969807856967187537694807317667973799f

float gelu(float x)
{
	float cdf = 0.5f * erff(x / GELU_CHECK_SQRT2) + 0.5f; /* Express the CDF of the normal distribution in terms of the error function */
	return x * cdf;
}

int main() /* check_affine_bound */
{
	float x = nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = gelu(x);
	float z = 0.5f * x; /* Tangent function at x = 0 */
	
	__VERIFIER_assert(isgreaterequal(y, z), ""); /* Expected result: verification successful */

    return 0;
}
