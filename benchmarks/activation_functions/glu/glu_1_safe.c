#include <verifier_functions.h>

#include <math.h>

float relu(float x)
{
	return fmaxf(x, 0.0f);
}

float logistic(float x)
{
	return 0.5f * tanhf(0.5f * x) + 0.5f;
}

float glu(float x, float y)
{
	return x * logistic(y);
}

#define GLU_CHECK_X_RANGE 3.4e38f

int main() /* check_lower_bound */
{
	float x = __VERIFIER_nondet_float();
	float y = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -GLU_CHECK_X_RANGE) && islessequal(x, GLU_CHECK_X_RANGE) && !isnan(y));
	
	float z = glu(x, y);
	float r = -relu(-x);
	
	__VERIFIER_assert(isgreaterequal(z, r)); /* Expected result: verification successful */

    return 0;
}
