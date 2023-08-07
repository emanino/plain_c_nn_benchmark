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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.25042852977574404f && tensor_dense_input[0][0] <= -0.11799631657713391f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.49223087327219894f && tensor_dense_input[0][1] <= -0.35979866007358885f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.08009380453103004f && tensor_dense_input[0][2] <= 0.21252601772964014f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.11705759793878578f && tensor_dense_input[0][3] <= 0.015374615259824309f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43378389340069495f && tensor_dense_input[0][4] <= 0.566216106599305f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06621610659930494f && tensor_dense_input[0][5] <= 0.06621610659930516f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.5563868610124416f && tensor_dense_input[0][6] <= -0.4239546478138316f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.03243799376178716f && tensor_dense_input[0][7] <= 0.16487020696039725f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
