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

	__ESBMC_assume(tensor_input[0][0] >= 0.04023446886873373f && tensor_input[0][0] <= 0.10047065113126626f);
	__ESBMC_assume(tensor_input[0][1] >= 0.7540650488687337f && tensor_input[0][1] <= 0.8143012311312663f);
	__ESBMC_assume(tensor_input[0][2] >= -0.13800207113126628f && tensor_input[0][2] <= -0.07776588886873374f);
	__ESBMC_assume(tensor_input[0][3] >= -1.2881426911312661f && tensor_input[0][3] <= -1.2279065088687338f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
