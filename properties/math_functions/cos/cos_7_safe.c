#include <math.h>

#define COS_CHECK_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062f
#define COS_CHECK_RANGE 100.0f
#define COS_CHECK_ERROR 1e-10f
#define COS_CHECK_NEXT 1e-5f

int main() /* check_symmetry */
{
	float x = nondet_float();
	
	__ESBMC_assume(isgreaterequal(x, 0));
	
	float y = cosf(x);
	float z = cosf(-x);
	
	__ESBMC_assert(y == z, ""); /* Expected result: verification success */
	
    return 0;
}
