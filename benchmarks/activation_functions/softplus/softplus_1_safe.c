#include <verifier_functions.h>

#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

int main() /* check_positive_asymptote */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = softplus(x);
	
	__VERIFIER_assert(isgreaterequal(y, x)); /* Expected result: verification successful */

    return 0;
}
