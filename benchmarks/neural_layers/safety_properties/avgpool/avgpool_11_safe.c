#include <verifier_functions.h>

#include <math.h>

/* simplified 1D average pooling */
void avgpool(const float* x, float* y, int n, int window, int stride)
{
	int i, j, k;
	
	for(i = 0, k = 0; i < n - window + 1; i += stride, k++) {
		y[k] = 0.0f;
		for(j = i; j < i + window; j++)
			y[k] += x[j];
		y[k] /= (float) window;
	}
}

#define AVGPOOL_CHECK_NEXT 1e-5f

int main() /* check_monotonicity_size_4 */
{
	float x[4], y[3];

	x[0] = __VERIFIER_nondet_float();
	x[1] = 0.123456f;
	x[2] = x[0] + AVGPOOL_CHECK_NEXT;
	x[3] = 0.654321f;
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	
	avgpool(x, y, 4, 2, 1);
	
	__VERIFIER_assert(islessequal(y[0], y[1])); /* Expected result: verification successful */

    return 0;
}
