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

int main() /* check_behaviour_size_4 */
{
	float x[4], y[3];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	__VERIFIER_assume(!isnan(x[2]) && !isinf(x[2]));
	__VERIFIER_assume(!isnan(x[3]) && !isinf(x[3]));
	
	maxpool(x, y, 4, 2, 1);
	
	__VERIFIER_assert(y[1] == fmaxf(x[1], x[2])); /* Expected result: verification successful */

    return 0;
}
