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

int main() /* check_symmetry_in_y */
{
	float x = __VERIFIER_nondet_float();
	float y = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -GLU_CHECK_X_RANGE) && islessequal(x, GLU_CHECK_X_RANGE) && !isnan(y));
	
	float z = glu(x, y);
	float z_inv = x - glu(x, -y);
	
	__VERIFIER_assert(z == z_inv); /* Expected result: verification failure */

    return 0;
}
