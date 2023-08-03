#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.7040400586709277f && tensor_input[0][0] <= -0.6475723413290724f);
	__ESBMC_assume(tensor_input[0][1] >= 0.02445632332907235f && tensor_input[0][1] <= 0.08092404067092765f);
	__ESBMC_assume(tensor_input[0][2] >= 0.00546964732907235f && tensor_input[0][2] <= 0.061937364670927655f);
	__ESBMC_assume(tensor_input[0][3] >= -0.07484228067092764f && tensor_input[0][3] <= -0.018374563329072346f);
	__ESBMC_assume(tensor_input[0][4] >= -0.03811166967092765f && tensor_input[0][4] <= 0.01835604767092765f);
	__ESBMC_assume(tensor_input[0][5] >= -0.031118669970927652f && tensor_input[0][5] <= 0.02534904737092765f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9717661413290724f && tensor_input[0][6] <= 1.0282338586709276f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9717661413290724f && tensor_input[0][7] <= 1.0282338586709276f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
