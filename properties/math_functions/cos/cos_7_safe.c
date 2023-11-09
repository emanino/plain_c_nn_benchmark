#include <verifier_functions.h>

#include <math.h>

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && !isinf(x));
	
	float y = cosf(x);
	float z = cosf(-x);
	
	__VERIFIER_assert(y == z); /* Expected result: verification success */
	
    return 0;
}
