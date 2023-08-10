#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

int main() /* check_lower_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = softsign(x);
	
	__VERIFIER_assert(isgreaterequal(y, -1.0f), ""); /* Expected result: verification successful */

    return 0;
}
