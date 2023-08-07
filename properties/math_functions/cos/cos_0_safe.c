#include <math.h>

int main() /* check_lower_bound */
{
    float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = cosf(x);
	
	__ESBMC_assert(isgreaterequal(y, -1.0f), ""); /* Expected result: verification successful */

    return 0;
}
