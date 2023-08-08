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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7943715905824532f && tensor_input[0][0] <= -0.7413748094175469f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.001663342582453202f && tensor_input[0][1] <= 0.0513334385824532f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0022983514175467998f && tensor_input[0][2] <= 0.0552951325824532f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0870692105824532f && tensor_input[0][3] <= -0.0340724294175468f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.0399681885824532f && tensor_input[0][4] <= 0.0130285925824532f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.10170367058245319f && tensor_input[0][5] <= -0.0487068894175468f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9735016094175468f && tensor_input[0][6] <= 1.0264983905824532f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9735016094175468f && tensor_input[0][7] <= 1.0264983905824532f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
