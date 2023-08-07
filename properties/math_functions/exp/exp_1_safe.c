#include <math.h>

int main() /* check_affine_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(!isnan(x));
	
	float y = expf(x);
	float z = x + 1.0f; /* Tangent function at x = 0 */
	
	__ESBMC_assert(isgreaterequal(y, z), ""); /* Expected result: verification successful */

    return 0;
}
