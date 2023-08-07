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

	__ESBMC_assume(tensor_input[0][0] >= -0.25526912207249614f && tensor_input[0][0] <= -0.25131623792750385f);
	__ESBMC_assume(tensor_input[0][1] >= -0.05677200907249614f && tensor_input[0][1] <= -0.05281912492750387f);
	__ESBMC_assume(tensor_input[0][2] >= -0.019537418072496135f && tensor_input[0][2] <= -0.015584533927503863f);
	__ESBMC_assume(tensor_input[0][3] >= -0.2965090420724961f && tensor_input[0][3] <= -0.29255615792750383f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
