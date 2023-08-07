#include <math.h>

float relu(float x)
{
	return fmaxf(x, 0.0f);
}

int main() /* check_negative_domain */
{
	float x = nondet_float();
	
	__ESBMC_assume(islessequal(x, 0.0f));
	
	float y = relu(x);
	
	__ESBMC_assert(y == 0.0, ""); /* Expected result: verification successful */

    return 0;
}
