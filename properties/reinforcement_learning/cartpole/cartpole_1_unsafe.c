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

	__ESBMC_assume(tensor_input[0][0] >= 0.46142588812490537f && tensor_input[0][0] <= 0.5184226718750946f);
	__ESBMC_assume(tensor_input[0][1] >= 0.06721501812490535f && tensor_input[0][1] <= 0.12421180187509465f);
	__ESBMC_assume(tensor_input[0][2] >= -0.03483366687509465f && tensor_input[0][2] <= 0.022163116875094646f);
	__ESBMC_assume(tensor_input[0][3] >= -0.33422889187509464f && tensor_input[0][3] <= -0.2772321081249054f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
