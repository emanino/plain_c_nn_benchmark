#include <verifier_functions.h>

#include <math.h>

float step(float x)
{
	return (x >= 0.0f)? 1.0f: 0.0f;
}

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = step(x);
	float z = 1.0f - step(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification failure */

    return 0;
}
