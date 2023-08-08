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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2667300186138323f && tensor_input[0][0] <= -0.24496762138616765f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.32745327138616764f && tensor_input[0][1] <= 0.34921566861383235f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.07223724861383232f && tensor_input[0][2] <= -0.050474851386167675f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.9557112986138323f && tensor_input[0][3] <= -0.9339489013861677f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
