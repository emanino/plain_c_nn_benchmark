#include <verifier_functions.h>

#include <math.h>

float step(float x)
{
	return (x >= 0.0f)? 1.0f: 0.0f;
}

int main() /* check_upper_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = step(x);
	
	__VERIFIER_assert(islessequal(y, 1.0f)); /* Expected result: verification successful */

    return 0;
}
