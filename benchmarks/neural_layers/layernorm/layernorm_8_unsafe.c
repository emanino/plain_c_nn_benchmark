#include <verifier_functions.h>

#include <math.h>

/* simplified layer normalisation */
void layernorm(const float* x, float* y, float gamma, float beta, int n)
{
	int i;
	
	/* estimate mean */
	float mean = x[0];
	for(i = 1; i < n; ++i)
		mean += x[i];
	mean /= (float) n;
	
	/* estimate standard deviation */
	float std = 0.0f;
	for(i = 0; i < n; ++i) {
		float diff = x[i] - mean;
		std += diff * diff;
	}
	std = sqrtf(std / ((float) n - 1.0f)) + 1e-8;
	
	/* normalise input */
	for(i = 0; i < n; ++i)
		y[i] = gamma * (x[i] - mean) / std + beta;
}

#define INPUT_SIZE 2

#define LAYERNORM_CHECK_RANGE 1e18f

int main() /* check_bound_size_2 */
{
	float x[INPUT_SIZE], y[INPUT_SIZE];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreater(x[0], -LAYERNORM_CHECK_RANGE) && isless(x[0], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1], -LAYERNORM_CHECK_RANGE) && isless(x[1], LAYERNORM_CHECK_RANGE));
	
	layernorm(x, y, 1.0f, 0.0f, INPUT_SIZE);
	
	/* compute the layer sum */
	int i;
	float sum = y[0];
	for(i = 1; i < INPUT_SIZE; ++i)
		sum += y[i];
	
	__VERIFIER_assert(sum == 0.0f); /* Expected result: verification failure */

    return 0;
}
