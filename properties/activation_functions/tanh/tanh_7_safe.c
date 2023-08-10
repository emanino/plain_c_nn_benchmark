#include <verifier_functions.h>

#include <math.h>

#define TANH_CHECK_NEXT 1e-5f
#define TANH_CHECK_RANGE 10.0f
#define TANH_CHECK_ERROR 1e-10f

int main() /* check_symmetry */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0));
	
	float y = tanhf(x);
	float z = tanhf(-x);
	
	__VERIFIER_assert(y == z, ""); /* Expected result: verification successful */

    return 0;
}
