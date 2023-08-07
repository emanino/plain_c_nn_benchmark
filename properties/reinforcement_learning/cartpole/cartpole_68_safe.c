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

	__ESBMC_assume(tensor_input[0][0] >= -0.26865617254964774f && tensor_input[0][0] <= -0.25857778745035226f);
	__ESBMC_assume(tensor_input[0][1] >= -0.05618565854964776f && tensor_input[0][1] <= -0.046107273450352246f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05548061054964776f && tensor_input[0][2] <= -0.045402225450352246f);
	__ESBMC_assume(tensor_input[0][3] >= -0.38044623254964777f && tensor_input[0][3] <= -0.3703678474503523f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
