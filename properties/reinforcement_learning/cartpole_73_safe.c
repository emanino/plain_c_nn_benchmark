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

	__ESBMC_assume(tensor_input[0][0] >= -0.2673144981930642f && tensor_input[0][0] <= -0.2599194618069358f);
	__ESBMC_assume(tensor_input[0][1] >= -0.4450191581930642f && tensor_input[0][1] <= -0.43762412180693583f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05413893619306421f && tensor_input[0][2] <= -0.046743899806935794f);
	__ESBMC_assume(tensor_input[0][3] >= 0.20545317180693579f && tensor_input[0][3] <= 0.21284820819306421f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
