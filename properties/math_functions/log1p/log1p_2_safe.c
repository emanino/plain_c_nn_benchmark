#include <verifier_functions.h>

#include <math.h>

#define LOG1P_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + LOG1P_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, -1.0f));
	
	float y1 = log1pf(x1);
	float y2 = log1pf(x2);
	
	__VERIFIER_assert(islessequal(y1, y2)); /* Expected result: verification successful */

    return 0;
}
