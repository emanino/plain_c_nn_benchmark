#include <verifier_functions.h>

#include <math.h>

#define TANH_CHECK_NEXT 1e-5f
#define TANH_CHECK_RANGE 10.0f
#define TANH_CHECK_ERROR 1e-10f

int main() /* check_inverse_approx */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -TANH_CHECK_RANGE) && islessequal(x, TANH_CHECK_RANGE)); /* Choose a range where precision is high */
	
	float y = atanhf(tanhf(x));
	float z = fabsf(x - y);
	
	__VERIFIER_assert(islessequal(z, TANH_CHECK_ERROR), ""); /* Expected result: verification successful */

    return 0;
}
