#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.9298048814074801f && tensor_input[0][0] <= -0.8336539185925199f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.002060950592519886f && tensor_input[0][1] <= 0.09821191340748012f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.44563131859251986f && tensor_input[0][2] <= 0.5417822814074801f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.1907178814074801f && tensor_input[0][3] <= -0.0945669185925199f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.45695062140748016f && tensor_input[0][4] <= -0.3607996585925199f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.048075475111370114f && tensor_input[0][5] <= 0.04807548770359012f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9519245185925199f && tensor_input[0][6] <= 1.0480754814074802f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9519245185925199f && tensor_input[0][7] <= 1.0480754814074802f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
