#include <verifier_functions.h>

#include <math.h>

#define GELU_CHECK_SQRT2 1.41421356237309504880168872420969807856967187537694807317667973799f

float gelu(float x)
{
	float cdf = 0.5f * erff(x / GELU_CHECK_SQRT2) + 0.5f; /* Express the CDF of the normal distribution in terms of the error function */
	return x * cdf;
}

#define GELU_CHECK_NEXT 1e-5f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + GELU_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1) && !isinf(x1));
	
	float y1 = gelu(x1);
	float y2 = gelu(x2);
	float derivative = (y2 - y1) / GELU_CHECK_NEXT;
	
	__VERIFIER_assert(isgreaterequal(derivative, 0.0f)); /* Expected result: verification failure */

    return 0;
}
