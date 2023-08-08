#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8175115960006062f && tensor_input[0][0] <= -0.7552883239993938f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.014901773999393776f && tensor_input[0][1] <= 0.07712504600060621f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.00849599300060622f && tensor_input[0][2] <= 0.053727279000606226f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07577182800060622f && tensor_input[0][3] <= -0.01354855599939378f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.03450900999939378f && tensor_input[0][4] <= 0.09673228200060623f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.08657376600060622f && tensor_input[0][5] <= -0.024350493999393777f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9688883639993938f && tensor_input[0][6] <= 1.0311116360006063f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9688883639993938f && tensor_input[0][7] <= 1.0311116360006063f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
