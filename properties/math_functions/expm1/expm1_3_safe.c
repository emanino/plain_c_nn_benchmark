#include <verifier_functions.h>

#include <math.h>

#define EXP_CHECK_NEXT 1e-2f
#define EXP_CHECK_RANGE 88.0f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x1, -EXP_CHECK_RANGE) && islessequal(x1, EXP_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float x2 = x1 + EXP_CHECK_NEXT;
	
	float y1 = expm1f(x1);
	float y2 = expm1f(x2);
	float derivative = (y2 - y1) / EXP_CHECK_NEXT;
	
	__VERIFIER_assert(isgreaterequal(derivative, y1 + 1.0f)); /* Expected result: verification successful */

    return 0;
}
