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

	__ESBMC_assume(tensor_input[0][0] >= -0.03699543815864681f && tensor_input[0][0] <= -0.02971209184135319f);
	__ESBMC_assume(tensor_input[0][1] >= 0.1465956168413532f && tensor_input[0][1] <= 0.1538789631586468f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05188023015864681f && tensor_input[0][2] <= -0.04459688384135319f);
	__ESBMC_assume(tensor_input[0][3] >= -0.40956027315864685f && tensor_input[0][3] <= -0.4022769268413532f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}