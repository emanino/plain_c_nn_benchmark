#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_dense_input[0][0] >= 0.015740981912489377f && tensor_dense_input[0][0] <= 0.0806256855140049f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.29014181890798035f && tensor_dense_input[0][1] <= -0.2252571153064648f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.08783200188623869f && tensor_dense_input[0][2] <= -0.022947298284723167f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.19901320460402638f && tensor_dense_input[0][3] <= 0.26389790820554193f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4675576481992422f && tensor_dense_input[0][4] <= 0.5324423518007577f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.03244235180075776f && tensor_dense_input[0][5] <= 0.03244235180075776f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.4042765366515658f && tensor_dense_input[0][6] <= -0.3393918330500503f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.36671669867220863f && tensor_dense_input[0][7] <= -0.3018319950706931f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
