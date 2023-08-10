#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

#define SOFTSIGN_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = softsign(x1);
	float y2 = softsign(x2);
	
	__VERIFIER_assert(islessequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
