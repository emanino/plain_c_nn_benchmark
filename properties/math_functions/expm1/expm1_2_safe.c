#include <verifier_functions.h>

#include <math.h>

#define EXP_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + EXP_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = expm1f(x1);
	float y2 = expm1f(x2);
	
	__VERIFIER_assert(islessequal(y1, y2)); /* Expected result: verification successful */

    return 0;
}
