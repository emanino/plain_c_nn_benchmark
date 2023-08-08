#include <verifier_functions.h>

#include <math.h>

#define LOG_CHECK_NEXT 1e-5f
#define LOG_CHECK_RANGE 100.0f
#define LOG_CHECK_ERROR 1e-10f

int main() /* check_inverse_exact */
{
	float x = nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && islessequal(x, LOG_CHECK_RANGE); /* Choose a range where precision is high */
	
	float y = expf(logf(x));
	
	__VERIFIER_assert(x == y, ""); /* Expected result: verification failure */

    return 0;
}
