#include <math.h>

#define EXP_CHECK_NEXT 1e-5f
#define EXP_CHECK_RANGE 100.0f
#define EXP_CHECK_ERROR 1e-10f

int main() /* check_inverse_exact */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, -EXP_CHECK_RANGE) && islessequal(x, EXP_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = logf(expf(x));
	
	__ESBMC_assert(x == y, ""); /* Expected result: verification failure */

    return 0;
}
