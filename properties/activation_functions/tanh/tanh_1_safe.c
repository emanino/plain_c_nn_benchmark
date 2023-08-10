#include <verifier_functions.h>

#include <math.h>

int main() /* check_upper_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = tanhf(x);
	
	__VERIFIER_assert(isgreaterequal(y, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
