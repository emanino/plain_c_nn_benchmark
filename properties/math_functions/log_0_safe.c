#include <math.h>

int main() /* check_domain */
{
	float x = nondet_float();
	
	__ESBMC_assume(islessthan(x, 0.0f));
	
	float y = logf(x);
	
	__ESBMC_assert(isnan(y), ""); /* Expected result: verification successful */

    return 0;
}
