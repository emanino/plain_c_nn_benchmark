#include <verifier_functions.h>

#include <math.h>

#define EXP_CHECK_NEXT 1e-5f
#define EXP_CHECK_RANGE 100.0f
#define EXP_CHECK_ERROR 1e-10f

int main() /* check_inverse_exact */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -EXP_CHECK_RANGE) && islessequal(x, EXP_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = logf(expf(x));
	
	__VERIFIER_assert(x == y, ""); /* Expected result: verification failure */

    return 0;
}
