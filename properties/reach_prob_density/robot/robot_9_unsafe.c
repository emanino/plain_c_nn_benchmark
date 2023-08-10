#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][5], float tensor_output[1][5]);

int main()
{
	float tensor_input[1][5];
	float tensor_output[1][5];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -1.8f && tensor_input[0][0] <= -1.2f);
	__VERIFIER_assume(tensor_input[0][1] >= -1.8f && tensor_input[0][1] <= -1.2f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0f && tensor_input[0][2] <= 1.5707963267948966f);
	__VERIFIER_assume(tensor_input[0][3] >= 1.0f && tensor_input[0][3] <= 1.5f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.0f && tensor_input[0][4] <= 2.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= 0.22510209287602703) && (tensor_output[0][1] >= -0.22510209287602703) && (tensor_output[0][2] <= 0.22510209287602703) && (tensor_output[0][2] >= -0.22510209287602703) && (tensor_output[0][0] >= 0.1362501380036763)));

	return 0;
}
