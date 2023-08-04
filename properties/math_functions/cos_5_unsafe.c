#include <math.h>

#define COS_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define COS_CHECK_RANGE 100.0f
#define COS_CHECK_ERROR 1e-10f
#define COS_CHECK_NEXT 1e-5f

int main() /* check_inverse_exact */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, -COS_CHECK_PI / 2.0f) && islessequal(x, COS_CHECK_PI / 2.0f)); /* Choose a range such that acos() is well-defined */
	
	float y = acosf(cosf(x));
	
	__ESBMC_assert(x == y, ""); /* Expected result: verification failure */

    return 0;
}