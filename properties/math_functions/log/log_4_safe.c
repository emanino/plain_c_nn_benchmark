#include <verifier_functions.h>

#include <math.h>

#define LOG_CHECK_NEXT 1e-5f
#define LOG_CHECK_RANGE 100.0f
#define LOG_CHECK_ERROR 1e-10f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + LOG_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, 0.0f));
	
	float y1 = logf(x1);
	float y2 = logf(x2);
	float derivative = (y2 - y1) / LOG_CHECK_NEXT;
	
	float d1 = 1.0f / x1; /* analytical derivative of log(x) at x = x1 */
	float d2 = 1.0f / x2; /* analytical derivative of log(x) at x = x2 */
	
	__VERIFIER_assert(isgreaterequal(derivative, d2)); /* Expected result: verification successful */

    return 0;
}
