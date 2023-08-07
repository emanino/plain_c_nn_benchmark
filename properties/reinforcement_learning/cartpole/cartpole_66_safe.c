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

	__ESBMC_assume(tensor_input[0][0] >= -0.27622521707318864f && tensor_input[0][0] <= -0.2702757029268113f);
	__ESBMC_assume(tensor_input[0][1] >= -0.056588907073188664f && tensor_input[0][1] <= -0.050639392926811334f);
	__ESBMC_assume(tensor_input[0][2] >= -0.021465701073188664f && tensor_input[0][2] <= -0.015516186926811336f);
	__ESBMC_assume(tensor_input[0][3] >= -0.32357529707318866f && tensor_input[0][3] <= -0.3176257829268113f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
