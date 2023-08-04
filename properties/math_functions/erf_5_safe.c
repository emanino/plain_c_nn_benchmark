#include <math.h>

int main() /* check_symmetry */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0));
	
	float y = erff(x);
	float z = erff(-x);
	
	__ESBMC_assert(y == z, ""); /* Expected result: verification success */

    return 0;
}
