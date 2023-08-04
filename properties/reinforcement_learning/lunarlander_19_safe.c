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

	__ESBMC_assume(tensor_input[0][0] >= -0.409282910779867f && tensor_input[0][0] <= -0.342445149220133f);
	__ESBMC_assume(tensor_input[0][1] >= 0.051935809220133015f && tensor_input[0][1] <= 0.11877357077986697f);
	__ESBMC_assume(tensor_input[0][2] >= -0.12091426077986697f && tensor_input[0][2] <= -0.054076499220133016f);
	__ESBMC_assume(tensor_input[0][3] >= -0.04011762777986698f && tensor_input[0][3] <= 0.026720133779866984f);
	__ESBMC_assume(tensor_input[0][4] >= -0.020799573779866982f && tensor_input[0][4] <= 0.046038187779866985f);
	__ESBMC_assume(tensor_input[0][5] >= 0.02456063622013302f && tensor_input[0][5] <= 0.09139839777986698f);
	__ESBMC_assume(tensor_input[0][6] >= -0.03341888077986698f && tensor_input[0][6] <= 0.03341888077986698f);
	__ESBMC_assume(tensor_input[0][7] >= -0.03341888077986698f && tensor_input[0][7] <= 0.03341888077986698f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}