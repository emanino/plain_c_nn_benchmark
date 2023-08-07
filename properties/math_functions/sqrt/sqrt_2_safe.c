#include <math.h>

int main() /* check_affine_bound */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0.0f));
	
	float y = sqrtf(x);
	float z = 0.5f * x + 0.5f; /* Tangent function at x = 1 */
	
	__ESBMC_assert(islessequal(y, z), ""); /* Expected result: verification successful */


    return 0;
}
