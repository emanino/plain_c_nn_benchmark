#include <math.h>

void entry(const float tensor_input[1][5], float tensor_output[1][5]);

int main()
{
	float tensor_input[1][5];
	float tensor_output[1][5];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -1.8f && tensor_input[0][0] <= -1.2f);
	__ESBMC_assume(tensor_input[0][1] >= -1.8f && tensor_input[0][1] <= -1.2f);
	__ESBMC_assume(tensor_input[0][2] >= 0.0f && tensor_input[0][2] <= 1.5707963267948966f);
	__ESBMC_assume(tensor_input[0][3] >= 1.0f && tensor_input[0][3] <= 1.5f);
	__ESBMC_assume(tensor_input[0][4] >= 0.0f && tensor_input[0][4] <= 2.5f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= 0.19890077332036324) && (tensor_output[0][1] >= -0.19890077332036324) && (tensor_output[0][2] <= 0.19890077332036324) && (tensor_output[0][2] >= -0.19890077332036324) && (tensor_output[0][0] >= 0.19456631910792194)));

	return 0;
}
