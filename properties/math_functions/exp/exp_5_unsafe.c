#include <verifier_functions.h>

#include <math.h>

#define EXP_CHECK_NEXT 1e-2f
#define EXP_CHECK_RANGE 88.0f
#define EXP_CHECK_ERROR 1e-9f

int main() /* check_inverse */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -EXP_CHECK_RANGE) && islessequal(x, EXP_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = logf(expf(x));
	float z = fabsf(x - y);
	
	__VERIFIER_assert(islessequal(z, EXP_CHECK_ERROR)); /* Expected result: verification failure */

    return 0;
}
