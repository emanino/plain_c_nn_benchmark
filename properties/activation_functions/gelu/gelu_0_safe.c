#include <verifier_functions.h>

#include <math.h>

#define GELU_CHECK_SQRT2 1.41421356237309504880168872420969807856967187537694807317667973799f

float gelu(float x)
{
	float cdf = 0.5f * erff(x / GELU_CHECK_SQRT2) + 0.5f; /* Express the CDF of the normal distribution in terms of the error function */
	return x * cdf;
}

int main() /* check_negative_asymptote */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(islessequal(x, 0.0f));
	
	float y = gelu(x);
	
	__VERIFIER_assert(islessequal(y, 0.0f)); /* Expected result: verification successful */

    return 0;
}
