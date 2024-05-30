#include <verifier_functions.h>

#include <math.h>

/* simplified linear layer */
void linear(const float* x, float* y, const float* W, const float* b, int m, int n)
{
	int i, j;
	
	for(i = 0; i < n; ++i) {
		y[i] = b[i];
		for(j = 0; j < m; ++j)
			y[i] += W[j][i] * x[j];
	}
}

#define INPUT_SIZE 2
#define OUTPUT_SIZE 2

int main() /* check_rectangular_size_2 */
{
	float x[INPUT_SIZE], y[OUTPUT_SIZE];
	
	float W[OUTPUT_SIZE][INPUT_SIZE] = {{ 2.3f, -2.3f},
										{-2.3f,  2.3f}};
	
	float b[OUTPUT_SIZE] = {0.0f};
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	
	linear(x, y, W, b, INPUT_SIZE, OUTPUT_SIZE);
	
	__VERIFIER_assert(y[0] == -y[1]); /* Expected result: verification successful */

    return 0;
}
