#include <verifier_functions.h>

#include <math.h>

int main() /* check_domain */
{
	float x = nondet_float();
	
	__VERIFIER_assume(islessthan(x, 0.0f));
	
	float y = logf(x);
	
	__VERIFIER_assert(isnan(y), ""); /* Expected result: verification successful */

    return 0;
}
