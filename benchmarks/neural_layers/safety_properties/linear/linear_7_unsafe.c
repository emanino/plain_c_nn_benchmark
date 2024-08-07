#include <verifier_functions.h>

#include <math.h>

#define INPUT_SIZE 8
#define OUTPUT_SIZE 8

/* simplified linear layer */
void linear(const float* x, float* y, const float W[OUTPUT_SIZE][INPUT_SIZE], const float* b, int m, int n)
{
	int i, j;
	
	for(i = 0; i < n; ++i) {
		y[i] = b[i];
		for(j = 0; j < m; ++j)
			y[i] += W[i][j] * x[j];
	}
}

int main() /* check_permutation_size_8 */
{
	float x[INPUT_SIZE], y[OUTPUT_SIZE];
	
	float W[OUTPUT_SIZE][INPUT_SIZE] = {{1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},
										{0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},
										{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f},
										{0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},
										{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f},
										{0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f},
										{0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f},
										{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f}};
	
	float b[OUTPUT_SIZE] = {-3.4f};
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	x[4] = __VERIFIER_nondet_float();
	x[5] = __VERIFIER_nondet_float();
	x[6] = __VERIFIER_nondet_float();
	x[7] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	__VERIFIER_assume(!isnan(x[2]) && !isinf(x[2]));
	__VERIFIER_assume(!isnan(x[3]) && !isinf(x[3]));
	__VERIFIER_assume(!isnan(x[4]) && !isinf(x[4]));
	__VERIFIER_assume(!isnan(x[5]) && !isinf(x[5]));
	__VERIFIER_assume(!isnan(x[6]) && !isinf(x[6]));
	__VERIFIER_assume(!isnan(x[7]) && !isinf(x[7]));
	
	linear(x, y, W, b, INPUT_SIZE, OUTPUT_SIZE);
	
	__VERIFIER_assert(isgreaterequal(x[5], y[2])); /* Expected result: verification failure */

    return 0;
}
