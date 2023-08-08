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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2488601224820147f && tensor_input[0][0] <= -0.23517777751798533f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.059465752482014675f && tensor_input[0][1] <= -0.04578340751798532f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.07245293248201468f && tensor_input[0][2] <= -0.05877058751798533f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3498943324820147f && tensor_input[0][3] <= -0.33621198751798537f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
