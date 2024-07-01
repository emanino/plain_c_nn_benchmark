#include <verifier_functions.h>

#include <math.h>

float gauss(float x)
{
	return expf(-x * x / 2.0f);
}

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f));
	
	float y = gauss(x);
	float z = gauss(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification successful */

    return 0;
}
