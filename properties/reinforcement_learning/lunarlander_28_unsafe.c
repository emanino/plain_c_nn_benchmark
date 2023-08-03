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

	__ESBMC_assume(tensor_input[0][0] >= -0.9342912928062884f && tensor_input[0][0] <= -0.8350667071937116f);
	__ESBMC_assume(tensor_input[0][1] >= 0.002441597193711592f && tensor_input[0][1] <= 0.1016661828062884f);
	__ESBMC_assume(tensor_input[0][2] >= 0.5422343071937116f && tensor_input[0][2] <= 0.6414588928062884f);
	__ESBMC_assume(tensor_input[0][3] >= -0.2206093628062884f && tensor_input[0][3] <= -0.1213847771937116f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4584872928062884f && tensor_input[0][4] <= -0.35926270719371156f);
	__ESBMC_assume(tensor_input[0][5] >= -0.04961228854323891f && tensor_input[0][5] <= 0.0496122970693379f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9503877071937116f && tensor_input[0][6] <= 1.0496122928062883f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9503877071937116f && tensor_input[0][7] <= 1.0496122928062883f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
