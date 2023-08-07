#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.10696332755603996f && tensor_input[0][0] <= 0.0979429036668798f);
	__ESBMC_assume(tensor_input[0][1] >= 0.09754688438854013f && tensor_input[0][1] <= 0.3024531156114599f);
	__ESBMC_assume(tensor_input[0][2] >= -0.5593086988023779f && tensor_input[0][2] <= -0.3544024675794581f);
	__ESBMC_assume(tensor_input[0][3] >= -0.13209446969547478f && tensor_input[0][3] <= 0.07281176152744498f);
	__ESBMC_assume(tensor_input[0][4] >= -0.09722007460066286f && tensor_input[0][4] <= 0.1076861566222569f);
	__ESBMC_assume(tensor_input[0][5] >= 0.0010314911313990122f && tensor_input[0][5] <= 0.2059377223543188f);
	__ESBMC_assume(tensor_input[0][6] >= -0.10245311561145988f && tensor_input[0][6] <= 0.10245311561145988f);
	__ESBMC_assume(tensor_input[0][7] >= -0.10245311561145988f && tensor_input[0][7] <= 0.10245311561145988f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
