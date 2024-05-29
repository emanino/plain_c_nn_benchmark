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

int main() /* check_symmetry_in_x */
{
	float x = __VERIFIER_nondet_float();
	float y = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x) && !isnan(y));
	
	float z = glu(x, y);
	float z_inv = glu(-x, y);
	
	__VERIFIER_assert(z == z_inv); /* Expected result: verification successful */

    return 0;
}
