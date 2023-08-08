#include <verifier_functions.h>

#include <math.h>

#define ERF_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = nondet_float();
	float x2 = x1 + ERF_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = erff(x1);
	float y2 = erff(x2);
	
	__VERIFIER_assert(isgreaterequal(y1, y2), ""); /* Expected result: verification successful */

    return 0;
}
