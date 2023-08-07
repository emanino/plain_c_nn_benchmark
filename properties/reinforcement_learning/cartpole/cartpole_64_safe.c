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

	__ESBMC_assume(tensor_input[0][0] >= -0.2515782510038075f && tensor_input[0][0] <= -0.23459800899619251f);
	__ESBMC_assume(tensor_input[0][1] >= 0.1345470489961925f && tensor_input[0][1] <= 0.1515272910038075f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0805918110038075f && tensor_input[0][2] <= -0.0636115689961925f);
	__ESBMC_assume(tensor_input[0][3] >= -0.6568770810038075f && tensor_input[0][3] <= -0.6398968389961924f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
