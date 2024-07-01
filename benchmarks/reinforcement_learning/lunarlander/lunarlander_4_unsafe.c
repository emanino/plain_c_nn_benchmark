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

	__VERIFIER_assume(tensor_input[0][0] >= -0.964483086158293f && tensor_input[0][0] <= -0.7975381138417069f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.033803403158293055f && tensor_input[0][1] <= 0.13314156915829306f);
	__VERIFIER_assume(tensor_input[0][2] >= 1.090073913841707f && tensor_input[0][2] <= 1.257018886158293f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.4225350261582931f && tensor_input[0][3] <= -0.25559005384170697f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.49234750615829304f && tensor_input[0][4] <= -0.3254025338417069f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.08347248494536466f && tensor_input[0][5] <= 0.08347248737122145f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9165275138417069f && tensor_input[0][6] <= 1.0834724861582932f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9165275138417069f && tensor_input[0][7] <= 1.0834724861582932f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
