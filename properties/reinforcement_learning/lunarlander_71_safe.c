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

	__ESBMC_assume(tensor_input[0][0] >= -0.5785552371692496f && tensor_input[0][0] <= -0.5392291628307503f);
	__ESBMC_assume(tensor_input[0][1] >= 0.09913308283075037f && tensor_input[0][1] <= 0.13845915716924964f);
	__ESBMC_assume(tensor_input[0][2] >= 0.004958890830750372f && tensor_input[0][2] <= 0.04428496516924963f);
	__ESBMC_assume(tensor_input[0][3] >= -0.04459910716924963f && tensor_input[0][3] <= -0.005273032830750372f);
	__ESBMC_assume(tensor_input[0][4] >= 0.06899287283075037f && tensor_input[0][4] <= 0.10831894716924964f);
	__ESBMC_assume(tensor_input[0][5] >= -0.17184653716924964f && tensor_input[0][5] <= -0.13252046283075036f);
	__ESBMC_assume(tensor_input[0][6] >= -0.01966303716924963f && tensor_input[0][6] <= 0.01966303716924963f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9803369628307503f && tensor_input[0][7] <= 1.0196630371692497f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
