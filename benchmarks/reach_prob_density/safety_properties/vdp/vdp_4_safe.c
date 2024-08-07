#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][3], float tensor_output[1][3]);

int main()
{
	float tensor_input[1][3];
	float tensor_output[1][3];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -2.5f && tensor_input[0][0] <= 2.5f);
	__VERIFIER_assume(tensor_input[0][1] >= -2.5f && tensor_input[0][1] <= 2.5f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0f && tensor_input[0][2] <= 5.0f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= 0.6034337034239154) && (tensor_output[0][1] >= -0.6034337034239154) && (tensor_output[0][2] <= 0.6034337034239154) && (tensor_output[0][2] >= -0.6034337034239154) && (tensor_output[0][0] >= 0.2821680445877145)));

	return 0;
}
