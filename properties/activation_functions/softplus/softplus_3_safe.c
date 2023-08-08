#include <verifier_functions.h>

#include <math.h>

float softplus(float x)
{
	return log1pf(expf(x));
}

#define SOFTPLUS_CHECK_LOG2 0.6931471805599453094172321214581765680755001343602552541206800094f
#define SOFTPLUS_CHECK_NEXT 1e-5

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + SOFTPLUS_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = softplus(x1);
	float y2 = softplus(x2);
	
	__VERIFIER_assert(islessequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
