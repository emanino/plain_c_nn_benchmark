#include <math.h>

int main() /* check_non_negative */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0.0f));
	
	float y = sqrtf(x);
	
	__ESBMC_assert(isgreaterequal(y, 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
