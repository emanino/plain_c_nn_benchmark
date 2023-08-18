#include <verifier_functions.h>

#include <math.h>

int main() /* check_upper_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x) && !isinf(x));
	
	float y = sinf(x);
	
	__VERIFIER_assert(islessequal(y, 1.0f)); /* Expected result: verification successful */

    return 0;
}
