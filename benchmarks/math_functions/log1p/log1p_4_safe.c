#include <verifier_functions.h>

#include <math.h>

#define LOG1P_CHECK_NEXT 1e-2f
#define LOG1P_CHECK_DIFF 1e-3f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + LOG1P_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, -1.0f) && !isinf(x1));
	
	float y1 = log1pf(x1);
	float y2 = log1pf(x2);
	float derivative = (y2 - y1) / LOG1P_CHECK_NEXT;
	
	float d2 = 1.0f / (1.0f + x2); /* analytical derivative of log(1 + x) at x = x2 */
	float diff = derivative - d2;
	
	__VERIFIER_assert(isgreaterequal(diff, -LOG1P_CHECK_DIFF)); /* Expected result: verification successful */

    return 0;
}
