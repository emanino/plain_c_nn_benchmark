#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= 0.015740981912489377f && tensor_dense_input[0][0] <= 0.0806256855140049f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.29014181890798035f && tensor_dense_input[0][1] <= -0.2252571153064648f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.08783200188623869f && tensor_dense_input[0][2] <= -0.022947298284723167f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= 0.19901320460402638f && tensor_dense_input[0][3] <= 0.26389790820554193f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4675576481992422f && tensor_dense_input[0][4] <= 0.5324423518007577f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03244235180075776f && tensor_dense_input[0][5] <= 0.03244235180075776f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.4042765366515658f && tensor_dense_input[0][6] <= -0.3393918330500503f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.36671669867220863f && tensor_dense_input[0][7] <= -0.3018319950706931f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
