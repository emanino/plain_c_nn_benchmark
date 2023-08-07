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

	__ESBMC_assume(tensor_input[0][0] >= 0.3996579959512434f && tensor_input[0][0] <= 0.4391904840487566f);
	__ESBMC_assume(tensor_input[0][1] >= -0.7089809440487566f && tensor_input[0][1] <= -0.6694484559512434f);
	__ESBMC_assume(tensor_input[0][2] >= 0.07699986595124342f && tensor_input[0][2] <= 0.11653235404875659f);
	__ESBMC_assume(tensor_input[0][3] >= 0.9468840059512434f && tensor_input[0][3] <= 0.9864164940487566f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
