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

int main() /* check_bound_size_2 */
{
	float x[2], y[1];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	
	avgpool(x, y, 2, 2, 2);
	
	__VERIFIER_assert(islessequal(y[0], fmaxf(x[0], x[1]))); /* Expected result: verification successful */

    return 0;
}
