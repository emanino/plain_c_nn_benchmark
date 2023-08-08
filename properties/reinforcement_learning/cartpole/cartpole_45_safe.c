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

	__VERIFIER_assume(tensor_input[0][0] >= -0.05494205647436299f && tensor_input[0][0] <= -0.045057943525637016f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05494205647436299f && tensor_input[0][1] <= -0.045057943525637016f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.004942056474362985f && tensor_input[0][2] <= 0.004942056474362985f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.004942056474362985f && tensor_input[0][3] <= 0.004942056474362985f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
