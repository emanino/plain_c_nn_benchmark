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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.24349899275937165f && tensor_dense_input[0][0] <= -0.11172250599924323f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.6209029044717743f && tensor_dense_input[0][1] <= -0.48912641771164594f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.31346717026066717f && tensor_dense_input[0][2] <= -0.1816906835005388f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.0658882433800643f && tensor_dense_input[0][3] <= -0.9341117566199358f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43411175661993573f && tensor_dense_input[0][4] <= 0.5658882433800642f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06588824338006422f && tensor_dense_input[0][5] <= 0.06588824338006419f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.3978479189549065f && tensor_dense_input[0][6] <= 0.5296244057150349f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.12105766254684715f && tensor_dense_input[0][7] <= 0.25283414930697556f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
