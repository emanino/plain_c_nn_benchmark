#include <math.h>

void entry(const float tensor_input[1][14], float tensor_output[1][14]);

int main()
{
	float tensor_input[1][14];
	float tensor_output[1][14];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();
	tensor_input[0][8] = nondet_float();
	tensor_input[0][9] = nondet_float();
	tensor_input[0][10] = nondet_float();
	tensor_input[0][11] = nondet_float();
	tensor_input[0][12] = nondet_float();
	tensor_input[0][13] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -1.7492930226200185f && tensor_input[0][0] <= 1.7312612073369356f);
	__ESBMC_assume(tensor_input[0][1] >= -1.7306896924315087f && tensor_input[0][1] <= 1.7194907929960244f);
	__ESBMC_assume(tensor_input[0][2] >= -4.2544681942084015f && tensor_input[0][2] <= 4.262319371300338f);
	__ESBMC_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__ESBMC_assume(tensor_input[0][4] >= 0.37946239980863533f && tensor_input[0][4] <= 5.195179481948719f);
	__ESBMC_assume(tensor_input[0][5] >= -4.2305759189759895f && tensor_input[0][5] <= 4.297077855273765f);
	__ESBMC_assume(tensor_input[0][6] >= -4.254739275598386f && tensor_input[0][6] <= 4.243234377401164f);
	__ESBMC_assume(tensor_input[0][7] >= -4.331464446479538f && tensor_input[0][7] <= 4.321347440367013f);
	__ESBMC_assume(tensor_input[0][8] >= -4.261814447656289f && tensor_input[0][8] <= 4.230029972475666f);
	__ESBMC_assume(tensor_input[0][9] >= -4.29592636097012f && tensor_input[0][9] <= 4.293297803709083f);
	__ESBMC_assume(tensor_input[0][10] >= -4.246175679988386f && tensor_input[0][10] <= 4.219576705814713f);
	__ESBMC_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__ESBMC_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__ESBMC_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
