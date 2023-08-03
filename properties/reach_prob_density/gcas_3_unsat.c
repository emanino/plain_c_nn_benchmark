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
	__ESBMC_assume(tensor_input[0][2] >= -2.5917639217463746f && tensor_input[0][2] <= 2.5996150988383104f);
	__ESBMC_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__ESBMC_assume(tensor_input[0][4] >= 1.067234227198703f && tensor_input[0][4] <= 5.195179481948719f);
	__ESBMC_assume(tensor_input[0][5] >= -2.565750272514649f && tensor_input[0][5] <= 2.6322522088124245f);
	__ESBMC_assume(tensor_input[0][6] >= -2.59570798106027f && tensor_input[0][6] <= 2.5842030828630485f);
	__ESBMC_assume(tensor_input[0][7] >= -2.642204595578164f && tensor_input[0][7] <= 2.632087589465639f);
	__ESBMC_assume(tensor_input[0][8] >= -2.6039797429823066f && tensor_input[0][8] <= 2.572195267801684f);
	__ESBMC_assume(tensor_input[0][9] >= -2.6190805307908254f && tensor_input[0][9] <= 2.6164519735297893f);
	__ESBMC_assume(tensor_input[0][10] >= -2.5934348368933287f && tensor_input[0][10] <= 2.566835862719657f);
	__ESBMC_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__ESBMC_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__ESBMC_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
