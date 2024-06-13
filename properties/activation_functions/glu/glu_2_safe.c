#include <verifier_functions.h>

#include <math.h>

float logistic(float x)
{
	return 0.5f * tanhf(0.5f * x) + 0.5f;
}

float glu(float x, float y)
{
	return x * logistic(y);
}

#define GLU_CHECK_X_RANGE 3.4e38f
#define GLU_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing_in_x */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + GLU_CHECK_NEXT;
	float y = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x1, -GLU_CHECK_X_RANGE) && islessequal(x1, GLU_CHECK_X_RANGE) && !isnan(y));
	
	float z1 = glu(x1, y);
	float z2 = glu(x2, y);
	
	__VERIFIER_assert(isgreaterequal(z2, z1)); /* Expected result: verification successful */

    return 0;
}
