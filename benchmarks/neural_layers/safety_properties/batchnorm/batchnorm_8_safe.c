#include <verifier_functions.h>

#include <math.h>

#define INPUT_SIZE 2
#define BATCH_SIZE 2

/* simplified batch normalisation */
void batchnorm(const float x[INPUT_SIZE][BATCH_SIZE], float y[INPUT_SIZE][BATCH_SIZE],
               float* mean, float* std, const float* gamma, const float* beta, int n, int batch_size)
{
	int i, j;

	/* estimate batch mean */
	for(i = 0; i < n; ++i) {
		mean[i] = 0.0f;
		for(j = 0; j < batch_size; ++j)
			mean[i] += x[i][j];
		mean[i] /= (float) batch_size;
	}

	/* estimate batch std */
	for(i = 0; i < n; ++i) {
		std[i] = 0.0f;
		for(j = 0; j < batch_size; ++j) {
			float diff = x[i][j] - mean[i];
			std[i] += diff * diff;
		}
		std[i] = sqrtf(std[i] / ((float) batch_size - 1.0f)) + 1e-8; /* corrected estimator */
	}

	/* apply normalisation */
	for(i = 0; i < n; ++i)
		for(j = 0; j < batch_size; ++j)
			y[i][j] = gamma[i] * (x[i][j] - mean[i]) / std[i] + beta[i];
}

#define BATCHNORM_CHECK_RANGE 1e18f
#define BATCHNORM_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing_size_2_2 */
{
	float x[INPUT_SIZE][BATCH_SIZE], y[INPUT_SIZE][BATCH_SIZE], mean[INPUT_SIZE], std[INPUT_SIZE];
	
	float gamma[INPUT_SIZE] = {0.123456f, 0.654321f};
	float beta[INPUT_SIZE] = {-0.42f, 0.333333f};

	x[0][0] = __VERIFIER_nondet_float();
	x[0][1] = x[0][0] + BATCHNORM_CHECK_NEXT;
	x[1][0] = __VERIFIER_nondet_float();
	x[1][1] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreater(x[0][0], -BATCHNORM_CHECK_RANGE) && isless(x[0][0], BATCHNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1][0], -BATCHNORM_CHECK_RANGE) && isless(x[1][0], BATCHNORM_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1][1], -BATCHNORM_CHECK_RANGE) && isless(x[1][1], BATCHNORM_CHECK_RANGE));
	
	batchnorm(x, y, mean, std, gamma, beta, INPUT_SIZE, BATCH_SIZE);
	
	__VERIFIER_assert(islessequal(y[0][0], y[0][1])); /* Expected result: verification successful */

    return 0;
}
