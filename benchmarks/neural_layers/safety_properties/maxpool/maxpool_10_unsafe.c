#include <verifier_functions.h>

#include <math.h>

/* simplified 1D max pooling */
void maxpool(const float* x, float* y, int n, int window, int stride)
{
	int i, j, k;
	
	for(i = 0, k = 0; i < n - window + 1; i += stride, k++) {
		y[k] = x[i];
		for(j = i + 1; j < i + window; j++)
			if(y[k] < x[j])
				y[k] = x[j];
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
	
	/* compute the max value overall */
	int i;
	float r = x[0];
	for(i = 1; i < 8; ++i)
		if(r < x[i])
			r = x[i];
	
	__VERIFIER_assert(y[2] == r); /* Expected result: verification failure */

    return 0;
}
