#include <math.h>

#define LOG_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + LOG_CHECK_NEXT;
	
	__ESBMC_assume(isgreaterequal(x1, 0.0f));
	
	float y1 = logf(x1);
	float y2 = logf(x2);
	
	__ESBMC_assert(isgreaterequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
