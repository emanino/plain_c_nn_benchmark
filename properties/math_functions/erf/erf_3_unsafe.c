#include <verifier_functions.h>

#include <math.h>

#define ERF_CHECK_NEXT 1e-5f

/* The following constant has been truncated on purpose */
#define ERF_CHECK_TWO_OVER_SQRT_PI 1.1283f // 1.1283791670955125738961589031215451716881012586579977136881714434f

int main() /* check_derivative */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + ERF_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1));
	
	float y1 = erff(x1);
	float y2 = erff(x2);
	float derivative = (y2 - y1) / ERF_CHECK_NEXT;
	
	__VERIFIER_assert(islessequal(derivative, ERF_CHECK_TWO_OVER_SQRT_PI)); /* Expected result: verification failure */

    return 0;
}
