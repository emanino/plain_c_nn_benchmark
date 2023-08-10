#include <verifier_functions.h>

#include <math.h>

#define SIN_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define SIN_CHECK_RANGE 100.0f
#define SIN_CHECK_ERROR 1e-10f
#define SIN_CHECK_NEXT 1e-5f

int main() /* check_inverse_exact */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -SIN_CHECK_PI / 2.0f) && islessequal(x, SIN_CHECK_PI / 2.0f)); /* Choose a range such that asin() is well-defined */
	
	float y = asinf(sinf(x));
	
	__VERIFIER_assert(x == y); /* Expected result: verification failure */
	
    return 0;
}
