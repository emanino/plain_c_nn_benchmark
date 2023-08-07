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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.24201806008177373f && tensor_dense_input[0][0] <= -0.11320343867684113f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.6194219717941765f && tensor_dense_input[0][1] <= -0.49060735038924386f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.3119862375830693f && tensor_dense_input[0][2] <= -0.18317161617813668f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.0644073107024663f && tensor_dense_input[0][3] <= -0.9355926892975337f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43559268929753364f && tensor_dense_input[0][4] <= 0.5644073107024663f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06440731070246632f && tensor_dense_input[0][5] <= 0.06440731070246629f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.3993288516325044f && tensor_dense_input[0][6] <= 0.528143473037437f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.12253859522444505f && tensor_dense_input[0][7] <= 0.25135321662937765f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
