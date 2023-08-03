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

	__ESBMC_assume(tensor_input[0][0] >= -0.27171550616314905f && tensor_input[0][0] <= -0.261292693836851f);
	__ESBMC_assume(tensor_input[0][1] >= -0.6430285061631491f && tensor_input[0][1] <= -0.632605693836851f);
	__ESBMC_assume(tensor_input[0][2] >= -0.04212679616314903f && tensor_input[0][2] <= -0.03170398383685097f);
	__ESBMC_assume(tensor_input[0][3] >= 0.5271063938368509f && tensor_input[0][3] <= 0.537529206163149f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
