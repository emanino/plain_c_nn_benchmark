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

	__ESBMC_assume(tensor_input[0][0] >= -0.0334391389803931f && tensor_input[0][0] <= -0.027728325019606898f);
	__ESBMC_assume(tensor_input[0][1] >= 0.33771292301960687f && tensor_input[0][1] <= 0.3434237369803931f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0380141229803931f && tensor_input[0][2] <= -0.0323033090196069f);
	__ESBMC_assume(tensor_input[0][3] >= -0.5956316069803931f && tensor_input[0][3] <= -0.5899207930196069f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
