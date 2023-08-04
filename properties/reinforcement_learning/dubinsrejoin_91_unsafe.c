#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.17508893234666778f && tensor_dense_input[0][0] <= -0.14157398400401439f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.2605982059940166f && tensor_dense_input[0][1] <= -0.22708325765136322f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.1802406716300895f && tensor_dense_input[0][2] <= 0.2137556199727429f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.6123664145315766f && tensor_dense_input[0][3] <= -0.5788514661889232f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4832425258286733f && tensor_dense_input[0][4] <= 0.5167574741713267f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.016757474171326676f && tensor_dense_input[0][5] <= 0.016757474171326746f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.11021792867756637f && tensor_dense_input[0][6] <= 0.1437328770202198f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.4668510938579849f && tensor_dense_input[0][7] <= 0.5003660422006383f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}