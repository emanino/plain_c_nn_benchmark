#include <verifier_functions.h>

#include <math.h>

float logistic(float x)
{
	return 0.5f * tanh(0.5f * x) + 0.5f;
}

int main() /* check_lower_bound */
{
	float x = nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = logistic(x);
	
	__VERIFIER_assert(isgreaterequal(y, 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
