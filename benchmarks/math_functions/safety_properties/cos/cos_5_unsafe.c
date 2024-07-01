#include <verifier_functions.h>

#include <math.h>

#define COS_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define COS_CHECK_ERROR 1e-6f

int main() /* check_inverse */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f) && islessequal(x, COS_CHECK_PI)); /* Choose a range such that acos() is well-defined */
	
	float y = acosf(cosf(x));
	float z = fabsf(x - y);
	
	__VERIFIER_assert(islessequal(z, COS_CHECK_ERROR)); /* Expected result: verification failure */

    return 0;
}
