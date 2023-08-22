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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4576699016464734f && tensor_input[0][0] <= 0.47526229835352657f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.3046722283535266f && tensor_input[0][1] <= -0.28707983164647344f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.020951855646473415f && tensor_input[0][2] <= 0.038544252353526584f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.30063120164647344f && tensor_input[0][3] <= 0.3182235983535266f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
