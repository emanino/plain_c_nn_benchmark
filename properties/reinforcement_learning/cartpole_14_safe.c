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

	__ESBMC_assume(tensor_input[0][0] >= -0.2564032266073448f && tensor_input[0][0] <= -0.23960987339265516f);
	__ESBMC_assume(tensor_input[0][1] >= -0.05906930460734483f && tensor_input[0][1] <= -0.042275951392655164f);
	__ESBMC_assume(tensor_input[0][2] >= -0.08230470660734483f && tensor_input[0][2] <= -0.06551135339265517f);
	__ESBMC_assume(tensor_input[0][3] >= -0.3947966266073448f && tensor_input[0][3] <= -0.37800327339265516f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
