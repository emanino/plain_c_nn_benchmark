#include <verifier_functions.h>

#include <math.h>

float elu(float x)
{
	if(x >= 0.0f)
		return x;
	else
		return expf(x) - 1.0f;
}

int main() /* check_positive_asymptote */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = elu(x);
	
	__VERIFIER_assert(isgreaterequal(y, x)); /* Expected result: verification successful */

    return 0;
}
