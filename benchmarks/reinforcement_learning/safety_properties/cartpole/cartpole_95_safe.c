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

	__VERIFIER_assume(tensor_input[0][0] >= 0.47977435920908074f && tensor_input[0][0] <= 0.4886125207909192f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.4948293807909192f && tensor_input[0][1] <= -0.48599121920908084f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.007325059209080789f && tensor_input[0][2] <= 0.01616322079091921f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.5846283192090808f && tensor_input[0][3] <= 0.5934664807909192f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
