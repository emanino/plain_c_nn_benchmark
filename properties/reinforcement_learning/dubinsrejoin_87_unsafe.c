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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.02881871513550413f && tensor_dense_input[0][0] <= 0.009614282140049448f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.4397441649599559f && tensor_dense_input[0][1] <= -0.4013111676844023f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.13082927966011743f && tensor_dense_input[0][2] <= 0.16926227693567103f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.9135716839557788f && tensor_dense_input[0][3] <= -0.8751386866802253f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4807835013622232f && tensor_dense_input[0][4] <= 0.5192164986377767f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.019216498637776788f && tensor_dense_input[0][5] <= 0.019216498637776788f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.31130617242694875f && tensor_dense_input[0][6] <= 0.34973916970250235f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.35595648001638913f && tensor_dense_input[0][7] <= 0.39438947729194274f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
