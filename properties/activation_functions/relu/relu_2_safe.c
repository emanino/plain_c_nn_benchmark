#include <verifier_functions.h>

#include <math.h>

float relu(float x)
{
	return fmaxf(x, 0.0f);
}

#define RELU_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + RELU_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = relu(x1);
	float y2 = relu(x2);
	
	__VERIFIER_assert(islessequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
