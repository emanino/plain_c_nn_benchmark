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

	__ESBMC_assume(tensor_input[0][0] >= -0.9617701077078886f && tensor_input[0][0] <= -0.8881807922921114f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04145490229211141f && tensor_input[0][1] <= 0.11504421770788859f);
	__ESBMC_assume(tensor_input[0][2] >= 0.033609002292111424f && tensor_input[0][2] <= 0.1071983177078886f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05713577270788858f && tensor_input[0][3] <= 0.016453542707888583f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4456696177078886f && tensor_input[0][4] <= -0.3720803022921114f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03679465169120098f && tensor_input[0][5] <= 0.03679466372457618f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9632053422921114f && tensor_input[0][6] <= 1.0367946577078886f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9632053422921114f && tensor_input[0][7] <= 1.0367946577078886f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
