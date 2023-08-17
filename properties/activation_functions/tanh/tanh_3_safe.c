#include <verifier_functions.h>

#include <math.h>

#define TANH_CHECK_NEXT 1e-2f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + TANH_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = tanhf(x1);
	float y2 = tanhf(x2);
	float derivative = (y2 - y1) / TANH_CHECK_NEXT;
	
	__VERIFIER_assert(islessequal(derivative, 1.0f)); /* Expected result: verification successful */

    return 0;
}
