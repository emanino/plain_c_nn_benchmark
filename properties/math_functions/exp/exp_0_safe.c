#include <verifier_functions.h>

#include <math.h>

int main() /* check_non_negative */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = expf(x);
	
	__VERIFIER_assert(isgreaterequal(y, 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
