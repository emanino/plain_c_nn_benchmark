#include <verifier_functions.h>

#include <math.h>

int main() /* check_lower_bound */
{
	float x = nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = sinf(x);
	
	__VERIFIER_assert(isgreaterequal(y, -1.0f), ""); /* Expected result: verification successful */

    return 0;
}
