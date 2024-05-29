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

#define GLU_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing_in_y */
{
	float x = __VERIFIER_nondet_float();
	float y1 = __VERIFIER_nondet_float();
	float y2 = y1 + GLU_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x) && !isnan(y1));
	
	float z1 = glu(x, y1);
	float z2 = glu(x, y2);
	
	__VERIFIER_assert(isgreaterequal(z2, z1)); /* Expected result: verification successful */

    return 0;
}
