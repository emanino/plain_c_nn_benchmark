#include <verifier_functions.h>

#include <math.h>

#define INPUT_SIZE 6
#define OUTPUT_SIZE 2

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

#define LINEAR_CHECK_RANGE 1e37f

int main() /* check_rectangular_size_6 */
{
	float x[INPUT_SIZE], y[OUTPUT_SIZE];
	
	float W[OUTPUT_SIZE][INPUT_SIZE] = {{ 2.3f,  2.3f,  2.3f, -2.3f, -2.3f, -2.3f},
										{-2.3f, -2.3f, -2.3f,  2.3f,  2.3f,  2.3f}};
	
	float b[OUTPUT_SIZE] = {0.0f};
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	x[4] = __VERIFIER_nondet_float();
	x[5] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreater(x[0], -LINEAR_CHECK_RANGE) && isless(x[0], LINEAR_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1], -LINEAR_CHECK_RANGE) && isless(x[1], LINEAR_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[2], -LINEAR_CHECK_RANGE) && isless(x[2], LINEAR_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[3], -LINEAR_CHECK_RANGE) && isless(x[3], LINEAR_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[4], -LINEAR_CHECK_RANGE) && isless(x[4], LINEAR_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[5], -LINEAR_CHECK_RANGE) && isless(x[5], LINEAR_CHECK_RANGE));
	
	linear(x, y, W, b, INPUT_SIZE, OUTPUT_SIZE);
	
	__VERIFIER_assert(y[0] == -y[1]); /* Expected result: verification successful */

    return 0;
}
