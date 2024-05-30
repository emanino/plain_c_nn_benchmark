#include <verifier_functions.h>

#include <math.h>

/* simplified single-channel 1D convolution */
void conv1d(const float* x, float* y, const float* kernel, int n, int window, int stride)
{
	int i, j, k;
	
	for(i = 0, k = 0; i < n - window + 1; i += stride, k++) {
		y[k] = 0.0f;
		for(j = 0; j < window; j++)
			y[k] += kernel[j] * x[i + j];
	}
}

#define INPUT_SIZE 4
#define KERNEL_SIZE 3

int main() /* check_identity_kernel_size_3 */
{
	float x[INPUT_SIZE], y[INPUT_SIZE - KERNEL_SIZE + 1];
	
	float kernel[KERNEL_SIZE] = {0.0f, 1.0f, 0.0f};

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	__VERIFIER_assume(!isnan(x[2]) && !isinf(x[2]));
	__VERIFIER_assume(!isnan(x[3]) && !isinf(x[3]));
	
	conv1d(x, y, kernel, INPUT_SIZE, KERNEL_SIZE, 1);
	
	__VERIFIER_assert(y[0] == x[1]); /* Expected result: verification successful */

    return 0;
}
