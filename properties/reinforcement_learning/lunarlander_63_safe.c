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

	__ESBMC_assume(tensor_input[0][0] >= -0.9607981250000003f && tensor_input[0][0] <= -0.8931549949999996f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04572882499999967f && tensor_input[0][1] <= 0.11337195500000033f);
	__ESBMC_assume(tensor_input[0][2] >= 0.035068694999999664f && tensor_input[0][2] <= 0.10271182500000033f);
	__ESBMC_assume(tensor_input[0][3] >= -0.053725426000000326f && tensor_input[0][3] <= 0.013917704000000333f);
	__ESBMC_assume(tensor_input[0][4] >= -0.44269673500000034f && tensor_input[0][4] <= -0.3750536049999997f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03382155939838693f && tensor_input[0][5] <= 0.03382157060161373f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9661784349999997f && tensor_input[0][6] <= 1.0338215650000002f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9661784349999997f && tensor_input[0][7] <= 1.0338215650000002f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
