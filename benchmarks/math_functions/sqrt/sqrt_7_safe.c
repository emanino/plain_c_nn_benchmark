#include <verifier_functions.h>

#include <math.h>

#define SQRT_CHECK_ERROR 1e-5f

int main() /* check_inverse */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && !isinf(x));
	
	float y = sqrtf(x);
	float z = y * y;
	float r = fabsf(x - z) / (x + 1e-37f); /* relative error: avoid division by zero */
	
	__VERIFIER_assert(islessequal(r, SQRT_CHECK_ERROR)); /* Expected result: verification successful */

    return 0;
}
