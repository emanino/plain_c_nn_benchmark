#include <math.h>

int main() /* check_upper_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = erff(x);
	
	__ESBMC_assert(islessequal(y, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
