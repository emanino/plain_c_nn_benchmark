#include <verifier_functions.h>

#include <math.h>

#define EXP_CHECK_NEXT 1e-5f

int main() /* check_derivative */
{
	float x1 = nondet_float();
	float x2 = x1 + EXP_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = expf(x1);
	float y2 = expf(x2);
	float derivative = (y2 - y1) / EXP_CHECK_NEXT;
	
	__VERIFIER_assert(isgreaterequal(derivative, y2), ""); /* Expected result: verification failure */

    return 0;
}
