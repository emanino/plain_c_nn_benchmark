#include <verifier_functions.h>

#include <math.h>

#define SQRT_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + SQRT_CHECK_NEXT;
	
	__VERIFIER_assume(isgreaterequal(x1, 0.0f));
	
	float y1 = sqrtf(x1);
	float y2 = sqrtf(x2);
	
	__VERIFIER_assert(islessequal(y1, y2)); /* Expected result: verification successful */


    return 0;
}
