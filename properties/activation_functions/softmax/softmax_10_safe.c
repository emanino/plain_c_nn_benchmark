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

int main() /* check_non_decreasing_size_2 */
{
	float x[2], y[2];
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = x[0] + SOFTMAX_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x[0]));
	
	softmax(x, y, 2);
	
	__VERIFIER_assert(islessequal(y[0], y[1])); /* Expected result: verification successful */

    return 0;
}
