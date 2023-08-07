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

	__ESBMC_assume(tensor_input[0][0] >= -0.9560450100177209f && tensor_input[0][0] <= -0.8892719899822792f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04335685998227916f && tensor_input[0][1] <= 0.11012988001772085f);
	__ESBMC_assume(tensor_input[0][2] >= 0.03510755998227916f && tensor_input[0][2] <= 0.10188058001772085f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05317590401772085f && tensor_input[0][3] <= 0.013597116017720848f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4422616500177209f && tensor_input[0][4] <= -0.37548862998227917f);
	__ESBMC_assume(tensor_input[0][5] >= -0.033386509865645855f && tensor_input[0][5] <= 0.03338651016979584f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9666134899822791f && tensor_input[0][6] <= 1.0333865100177209f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9666134899822791f && tensor_input[0][7] <= 1.0333865100177209f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
