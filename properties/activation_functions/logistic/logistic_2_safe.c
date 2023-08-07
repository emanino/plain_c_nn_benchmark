#include <math.h>

float logistic(float x)
{
	return 0.5f * tanh(0.5f * x) + 0.5f;
}

#define LOGISTIC_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + LOGISTIC_CHECK_NEXT;
	
	__ESBMC_assume(!isnan(x1));
	
	float y1 = logistic(x1);
	float y2 = logistic(x2);
	
	__ESBMC_assert(islessequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
