#include <verifier_functions.h>

#include <math.h>

int main() /* check_upper_bound */
{
	float x = nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = cosf(x);
	
	__VERIFIER_assert(islessequal(y, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
