#include <verifier_functions.h>

#include <math.h>

float gauss(float x)
{
	return expf(-x * x / 2.0f);
}

int main() /* check_upper_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = gauss(x);
	
	__VERIFIER_assert(islessequal(y, 1.0f)); /* Expected result: verification successful */

    return 0;
}
