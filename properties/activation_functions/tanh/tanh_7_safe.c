#include <verifier_functions.h>

#include <math.h>

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f));
	
	float y = tanhf(x);
	float z = -tanhf(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification successful */

    return 0;
}
