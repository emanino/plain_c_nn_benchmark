#include <verifier_functions.h>

#include <math.h>

float relu(float x)
{
	return fmaxf(x, 0.0f);
}

int main() /* check_negative_domain */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(islessequal(x, 0.0f));
	
	float y = relu(x);
	
	__VERIFIER_assert(y == 0.0); /* Expected result: verification successful */

    return 0;
}
