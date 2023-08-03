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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.29328954209430624f && tensor_dense_input[0][0] <= -0.16260496688944137f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.6714010767153274f && tensor_dense_input[0][1] <= -0.5407165015104626f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.7251262077381977f && tensor_dense_input[0][2] <= -0.5944416325333328f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.4193750974878489f && tensor_dense_input[0][3] <= -0.28869052228298403f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43465771239756756f && tensor_dense_input[0][4] <= 0.5653422876024324f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06534228760243245f && tensor_dense_input[0][5] <= 0.06534228760243245f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.06768485520513207f && tensor_dense_input[0][6] <= 0.06299971999973283f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5653367999493449f && tensor_dense_input[0][7] <= -0.43465222474448f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
