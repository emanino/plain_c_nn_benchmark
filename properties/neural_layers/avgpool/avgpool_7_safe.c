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

#define AVGPOOL_CHECK_RANGE 1e37f

int main() /* check_bound_size_4 */
{
	float x[4], y[3];

	x[0] = __VERIFIER_nondet_float();
	x[1] = __VERIFIER_nondet_float();
	x[2] = __VERIFIER_nondet_float();
	x[3] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreater(x[0], -AVGPOOL_CHECK_RANGE) && isless(x[0], AVGPOOL_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[1], -AVGPOOL_CHECK_RANGE) && isless(x[1], AVGPOOL_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[2], -AVGPOOL_CHECK_RANGE) && isless(x[2], AVGPOOL_CHECK_RANGE));
	__VERIFIER_assume(isgreater(x[3], -AVGPOOL_CHECK_RANGE) && isless(x[3], AVGPOOL_CHECK_RANGE));
	
	maxpool(x, y, 4, 2, 1);
	
	/* compute the min value overall */
	int i;
	float r = x[0];
	for(i = 1; i < 4; ++i)
		if(r > x[i])
			x[i] = r;
	
	__VERIFIER_assert(isgreaterequal(y[2], r)); /* Expected result: verification successful */

    return 0;
}
