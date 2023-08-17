#include <verifier_functions.h>

#include <math.h>

float elu(float x)
{
	if(x >= 0.0f)
		return x;
	else
		return expf(x) - 1.0f;
}

#define ELU_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + ELU_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = elu(x1);
	float y2 = elu(x2);
	
	__VERIFIER_assert(islessequal(y1, y2)); /* Expected result: verification successful */

    return 0;
}
