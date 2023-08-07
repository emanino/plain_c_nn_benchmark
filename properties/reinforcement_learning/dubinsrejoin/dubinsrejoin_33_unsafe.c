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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.35205777575426367f && tensor_dense_input[0][0] <= -0.2189635909795646f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.16013491800651525f && tensor_dense_input[0][1] <= -0.027040733231816147f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.7458229947372674f && tensor_dense_input[0][2] <= -0.6127288099625683f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.14800296074140923f && tensor_dense_input[0][3] <= 0.2810971455161083f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43345290761265043f && tensor_dense_input[0][4] <= 0.5665470923873496f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06654709238734959f && tensor_dense_input[0][5] <= 0.0665470923873495f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.13651971375980254f && tensor_dense_input[0][6] <= -0.003425528985103468f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5616267145273315f && tensor_dense_input[0][7] <= -0.42853252975263245f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
