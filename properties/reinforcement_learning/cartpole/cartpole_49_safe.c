#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.052039137813545085f && tensor_input[0][0] <= -0.04996086218645491f);
	__ESBMC_assume(tensor_input[0][1] >= 0.1440828121864549f && tensor_input[0][1] <= 0.1461610878135451f);
	__ESBMC_assume(tensor_input[0][2] >= -0.001039137813545087f && tensor_input[0][2] <= 0.001039137813545087f);
	__ESBMC_assume(tensor_input[0][3] >= -0.2937220578135451f && tensor_input[0][3] <= -0.2916437821864549f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
