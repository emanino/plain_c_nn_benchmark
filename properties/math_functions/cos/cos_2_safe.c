#include <verifier_functions.h>

#include <math.h>

#define COS_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define COS_CHECK_RANGE 100.0f
#define COS_CHECK_ERROR 1e-10f
#define COS_CHECK_NEXT 1e-5f

int main() /* check_periodic */
{
	float x1 = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -COS_CHECK_RANGE) && islessequal(x, COS_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float x2 = x1 + 2.0f * COS_CHECK_PI; /* Next period */
	
	float error = fabsf(cosf(x1) - cosf(x2));
	
	__VERIFIER_assert(islessequal(error, COS_CHECK_ERROR), ""); /* Expected result: verification successful */

    return 0;
}
