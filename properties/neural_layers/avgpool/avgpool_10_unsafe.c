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

int main() /* check_bound_size_8 */
{
	float x[8], y[5];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = -0.123456f;
	x[4] = __VERIFIER_nondet_float();
	x[5] = __VERIFIER_nondet_float();
	x[6] = 3.14f;
	x[7] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	__VERIFIER_assume(!isnan(x[2]) && !isinf(x[2]));
	__VERIFIER_assume(!isnan(x[4]) && !isinf(x[4]));
	__VERIFIER_assume(!isnan(x[5]) && !isinf(x[5]));
	__VERIFIER_assume(!isnan(x[7]) && !isinf(x[7]));
	
	maxpool(x, y, 8, 4, 1);
	
	/* compute the min value overall */
	int i;
	float r = x[0];
	for(i = 1; i < 8; ++i)
		if(r > x[i])
			x[i] = r;
	
	__VERIFIER_assert(y[2] == r); /* Expected result: verification failure */

    return 0;
}
