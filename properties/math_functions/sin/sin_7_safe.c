#include <verifier_functions.h>

#include <math.h>

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0));
	
	float y = sinf(x);
	float z = -sinf(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification success */

    return 0;
}
