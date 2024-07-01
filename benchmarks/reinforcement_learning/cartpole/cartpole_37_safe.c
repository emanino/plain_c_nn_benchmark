#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.03551903493471637f && tensor_input[0][0] <= -0.02517900106528363f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.04933861193471637f && tensor_input[0][1] <= -0.038998578065283625f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06152694693471637f && tensor_input[0][2] <= -0.051186913065283626f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.13399563693471636f && tensor_input[0][3] <= -0.12365560306528363f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
