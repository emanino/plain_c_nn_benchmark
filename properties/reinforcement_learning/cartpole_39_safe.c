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

	__ESBMC_assume(tensor_input[0][0] >= -0.26113676983871037f && tensor_input[0][0] <= -0.2562197501612896f);
	__ESBMC_assume(tensor_input[0][1] >= -0.24939507983871037f && tensor_input[0][1] <= -0.24447806016128962f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05154693983871039f && tensor_input[0][2] <= -0.04662992016128961f);
	__ESBMC_assume(tensor_input[0][3] >= -0.07010796383871039f && tensor_input[0][3] <= -0.06519094416128961f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
