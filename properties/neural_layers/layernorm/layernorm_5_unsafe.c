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
	std = sqrtf(std / ((float) n - 1.0f))
	
	/* normalise input */
	for(i = 0; i < n; ++i)
		y[i] = gamma * (x[i] - mean) / std + beta;
}

#define INPUT_SIZE 4

#define LAYERNORM_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing_size_4 */
{
	float x[INPUT_SIZE], y[INPUT_SIZE];

	x[0] = __VERIFIER_nondet_float();
	x[1] = x[0] + MAXPOOL_CHECK_NEXT;
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[2]) && !isinf(x[2]));
	__VERIFIER_assume(!isnan(x[3]) && !isinf(x[3]));
	
	layernorm(x, y, -0.42f, 1.3f, INPUT_SIZE);
	
	__VERIFIER_assert(islessequal(y[0], y[1])); /* Expected result: verification failure */

    return 0;
}
