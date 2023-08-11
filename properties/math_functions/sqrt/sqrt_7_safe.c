#include <verifier_functions.h>

#include <math.h>

#define SQRT_CHECK_NEXT 1e-5
#define SQRT_CHECK_RANGE 10000.0
#define SQRT_CHECK_ERROR 1e-10

int main() /* check_inverse_approx */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && islessequal(x, SQRT_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = sqrtf(x);
	float z = fabsf(y * y - x);
	
	__VERIFIER_assert(islessequal(z, SQRT_CHECK_ERROR)); /* Expected result: verification successful */

    return 0;
}
