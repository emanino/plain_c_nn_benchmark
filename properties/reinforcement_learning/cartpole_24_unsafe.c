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

	__ESBMC_assume(tensor_input[0][0] >= -0.4163068504743891f && tensor_input[0][0] <= -0.3443856895256109f);
	__ESBMC_assume(tensor_input[0][1] >= 1.0451431195256107f && tensor_input[0][1] <= 1.117064280474389f);
	__ESBMC_assume(tensor_input[0][2] >= -0.19274238047438913f && tensor_input[0][2] <= -0.12082121952561088f);
	__ESBMC_assume(tensor_input[0][3] >= -1.6365536804743892f && tensor_input[0][3] <= -1.5646325195256108f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
