#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= 0.01610335529140806f && tensor_input[0][0] <= 0.07771229270859194f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.752069831291408f && tensor_input[0][1] <= 0.813678768708592f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.10281310870859194f && tensor_input[0][2] <= -0.04120417129140806f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.256411668708592f && tensor_input[0][3] <= -1.194802731291408f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
