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

	__ESBMC_assume(tensor_input[0][0] >= -0.7174555973704708f && tensor_input[0][0] <= -0.6517892026295291f);
	__ESBMC_assume(tensor_input[0][1] >= 0.0421793966295291f && tensor_input[0][1] <= 0.1078457913704709f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0041525633704708985f && tensor_input[0][2] <= 0.061513831370470895f);
	__ESBMC_assume(tensor_input[0][3] >= -0.0623081193704709f && tensor_input[0][3] <= 0.003358275370470898f);
	__ESBMC_assume(tensor_input[0][4] >= -0.1322647973704709f && tensor_input[0][4] <= -0.0665984026295291f);
	__ESBMC_assume(tensor_input[0][5] >= -0.0895447293704709f && tensor_input[0][5] <= -0.023878334629529104f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9671668026295291f && tensor_input[0][6] <= 1.032833197370471f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9671668026295291f && tensor_input[0][7] <= 1.032833197370471f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}