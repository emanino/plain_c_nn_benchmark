#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

#define SOFTSIGN_CHECK_NEXT 1e-1f
#define SOFTSIGN_CHECK_ERROR 1e-3f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1) && !isinf(x1));
	
	float y1 = softsign(x1);
	float y2 = softsign(x2);
	float derivative = (y2 - y1) / SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assert(isgreaterequal(derivative, -SOFTSIGN_CHECK_ERROR)); /* Expected result: verification successful */

    return 0;
}
