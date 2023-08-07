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

	__ESBMC_assume(tensor_input[0][0] >= -0.05931865632129312f && tensor_input[0][0] <= 0.06621772706103922f);
	__ESBMC_assume(tensor_input[0][1] >= 0.13723180830883386f && tensor_input[0][1] <= 0.26276819169116616f);
	__ESBMC_assume(tensor_input[0][2] >= 0.2866169506351888f && tensor_input[0][2] <= 0.41215333401752113f);
	__ESBMC_assume(tensor_input[0][3] >= -0.028626090880161527f && tensor_input[0][3] <= 0.09691029250217081f);
	__ESBMC_assume(tensor_input[0][4] >= -0.06675855315816999f && tensor_input[0][4] <= 0.058777830224162345f);
	__ESBMC_assume(tensor_input[0][5] >= -0.14190911113811136f && tensor_input[0][5] <= -0.016372727755779026f);
	__ESBMC_assume(tensor_input[0][6] >= -0.06276819169116617f && tensor_input[0][6] <= 0.06276819169116617f);
	__ESBMC_assume(tensor_input[0][7] >= -0.06276819169116617f && tensor_input[0][7] <= 0.06276819169116617f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
