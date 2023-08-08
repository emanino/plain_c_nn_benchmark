#include <verifier_functions.h>

#include <math.h>

#define SIN_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define SIN_CHECK_RANGE 100.0f
#define SIN_CHECK_ERROR 1e-10f
#define SIN_CHECK_NEXT 1e-5f

int main() /* check_derivative */
{
	float x1 = nondet_float();
	float x2 = x1 + SIN_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, 0.0f));
	
	float y1 = sinf(x1);
	float y2 = sinf(x2);
	float derivative = (y2 - y1) / SIN_CHECK_NEXT;
	
	float dref = cosf(x1 / 2.0f + x2 / 2.0f); /* average analytical derivative of sin(x) at the midpoint between x1 and x2*/
	
	__VERIFIER_assert(derivative == dref, ""); /* Expected result: verification failure */

    return 0;
}
