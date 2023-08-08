#include <verifier_functions.h>

#include <math.h>

int main() /* check_non_negative */
{
	float x = nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, 0.0f));
	
	float y = sqrtf(x);
	
	__VERIFIER_assert(isgreaterequal(y, 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
