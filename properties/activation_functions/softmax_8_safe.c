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
		float z = exp(x[i] - max);
		sum += z;
		y[i] = z;
	}
	
	/* divide by the sum, i.e. make the result sum up to one */
	for(i = 0; i < n; ++i)
		y[i] /= sum;
}

#define SOFTMAX_CHECK_ERROR 1e-10

int main() /* check_unitary_sum_size_4 */
{
	float x[4], y[4];

	x[0] = nondet_float();
	x[1] = nondet_float();
	x[2] = nondet_float();
	x[3] = nondet_float();
	
	__ESBMC_assume(!isnan(x[0]));
	__ESBMC_assume(!isnan(x[1]));
	__ESBMC_assume(!isnan(x[2]));
	__ESBMC_assume(!isnan(x[3]));
	
	softmax(x, y, 4);
	
	int i;
	float sum = 0.0f;
	for(i = 0; i < 4; ++i)
		sum += y[i];
	
	float diff = fabs(sum - 1.0f);
	
	__ESBMC_assert(islessequal(diff, SOFTMAX_CHECK_ERROR), ""); /* Expected result: verification successful */

    return 0;
}
