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

	__VERIFIER_assume(tensor_input[0][0] >= 0.45039583918067894f && tensor_input[0][0] <= 0.45516596081932104f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.10339926081932106f && tensor_input[0][1] <= -0.09862913918067893f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.044442855180678933f && tensor_input[0][2] <= 0.04921297681932106f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.020006369180678937f && tensor_input[0][3] <= 0.024776490819321064f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
