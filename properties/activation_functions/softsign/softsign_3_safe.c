#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

#define SOFTSIGN_CHECK_NEXT 1e-5f

int main() /* check_derivative */
{
	float x1 = nondet_float();
	float x2 = x1 + SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = softsign(x1);
	float y2 = softsign(x2);
	float derivative = (y2 - y1) / SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assert(islessequal(derivative, 1.0f), ""); /* Expected result: verification successful */

    return 0;
}
