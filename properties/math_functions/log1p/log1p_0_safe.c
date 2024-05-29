#include <verifier_functions.h>

#include <math.h>

int main() /* check_domain */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isless(x, -1.0f));
	
	float y = log1pf(x);
	
	__VERIFIER_assert(isnan(y)); /* Expected result: verification successful */

    return 0;
}
