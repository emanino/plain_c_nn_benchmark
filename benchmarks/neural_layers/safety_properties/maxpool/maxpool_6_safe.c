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

int main() /* check_bound_size_2 */
{
	float x[2], y[1];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	
	maxpool(x, y, 2, 2, 2);
	
	/* compute the max value overall */
	int i;
	float r = x[0];
	for(i = 1; i < 2; ++i)
		if(r < x[i])
			r = x[i];
	
	__VERIFIER_assert(islessequal(y[0], r)); /* Expected result: verification successful */

    return 0;
}