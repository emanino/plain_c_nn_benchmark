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

#define INPUT_SIZE 8

#define LAYERNORM_CHECK_RANGE 1e18f
#define LAYERNORM_CHECK_ERROR 1e-5

int main() /* check_bound_size_8 */
{
	float x[INPUT_SIZE], y[INPUT_SIZE];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	x[4] = __VERIFIER_nondet_float();
	x[5] = __VERIFIER_nondet_float();
	x[6] = __VERIFIER_nondet_float();
	x[7] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreater(x[0], -LAYERNORM_CHECK_RANGE) && isless(x[0], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1], -LAYERNORM_CHECK_RANGE) && isless(x[1], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[2], -LAYERNORM_CHECK_RANGE) && isless(x[2], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[3], -LAYERNORM_CHECK_RANGE) && isless(x[3], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[4], -LAYERNORM_CHECK_RANGE) && isless(x[4], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[5], -LAYERNORM_CHECK_RANGE) && isless(x[5], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[6], -LAYERNORM_CHECK_RANGE) && isless(x[6], LAYERNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[7], -LAYERNORM_CHECK_RANGE) && isless(x[7], LAYERNORM_CHECK_RANGE));
	
	layernorm(x, y, 1.0f, 0.0f, INPUT_SIZE);
	
	/* compute the layer sum */
	int i;
	float sum = y[0];
	for(i = 1; i < INPUT_SIZE; ++i)
		sum += y[i];
	
	__VERIFIER_assert(fabsf(sum) <= LAYERNORM_CHECK_ERROR); /* Expected result: verification successful */

    return 0;
}
