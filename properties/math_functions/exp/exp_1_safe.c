#include <verifier_functions.h>

#include <math.h>

int main() /* check_affine_bound */
{
	float x = nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = expf(x);
	float z = x + 1.0f; /* Tangent function at x = 0 */
	
	__VERIFIER_assert(isgreaterequal(y, z), ""); /* Expected result: verification successful */

    return 0;
}
