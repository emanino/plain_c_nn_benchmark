#include <verifier_functions.h>

#include <math.h>

#define EXPM1_CHECK_RANGE 88.0f
#define EXPM1_CHECK_ERROR 1e-5f

int main() /* check_inverse */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && islessequal(x, EXPM1_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = log1pf(expm1f(x));
	float z = fabsf(x - y);
	
	__VERIFIER_assert(islessequal(z, EXPM1_CHECK_ERROR)); /* Expected result: verification successful */

    return 0;
}
