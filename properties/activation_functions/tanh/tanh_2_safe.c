#include <verifier_functions.h>

#include <math.h>

#define TANH_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + TANH_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = tanhf(x1);
	float y2 = tanhf(x2);
	
	__VERIFIER_assert(islessequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
