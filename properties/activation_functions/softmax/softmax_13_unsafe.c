#include <verifier_functions.h>

#include <math.h>

void softmax(const float* x, float* y, int n)
{
	int i;
	
	/* find max input value to avoid overflow */
	float max = x[0];
	for(i = 1; i < n; ++i)
		if(x[i] > max)
			max = x[i];
	
	/* compute the element-wise exponential while keeping track of their sum */
	float sum = 0.0f;
	for(i = 0; i < n; ++i) {
		float z = expf(x[i] - max);
		sum += z;
		y[i] = z;
	}
	
	/* divide by the sum, i.e. make the result sum up to one */
	for(i = 0; i < n; ++i)
		y[i] /= sum;
}

#define SOFTMAX_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing_size_4 */
{
	float x[4], y[4];
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = x[0] + SOFTMAX_CHECK_NEXT;
	x[2] = 0.123456f;
	x[3] = 0.654321f;
	
	__VERIFIER_assume(!isnan(x[0]));
	
	softmax(x, y, 4);
	
	__VERIFIER_assert(isgreaterequal(y[2], y[3])); /* Expected result: verification failure */

    return 0;
}
