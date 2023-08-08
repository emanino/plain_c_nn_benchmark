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

	__VERIFIER_assume(tensor_input[0][0] >= 0.43148256287790754f && tensor_input[0][0] <= 0.4385384771220925f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.3025261071220925f && tensor_input[0][1] <= -0.29547019287790754f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.07028997287790752f && tensor_input[0][2] <= 0.07734588712209249f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.3755895628779075f && tensor_input[0][3] <= 0.38264547712209246f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
