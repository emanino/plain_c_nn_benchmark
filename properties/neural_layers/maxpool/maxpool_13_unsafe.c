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

#define MAXPOOL_CHECK_NEXT 1e-5f

int main() /* check_monotonicity_size_8 */
{
	float x[8], y[5];
	
	x[0] = __VERIFIER_nondet_float();
	x[1] = x[0] + MAXPOOL_CHECK_NEXT;
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	x[4] = __VERIFIER_nondet_float();
	x[5] = -0.123456f;
	x[6] = 0.654321f;
	x[7] = 3.14f;
	
	__VERIFIER_assume(!isnan(x[0]) && !isinf(x[0]));
	__VERIFIER_assume(!isnan(x[1]) && !isinf(x[1]));
	__VERIFIER_assume(!isnan(x[3]) && !isinf(x[3]));
	__VERIFIER_assume(!isnan(x[4]) && !isinf(x[4]));
	
	maxpool(x, y, 8, 4, 1);
	
	__VERIFIER_assert(islessequal(y[0], y[2])); /* Expected result: verification failure */

    return 0;
}
