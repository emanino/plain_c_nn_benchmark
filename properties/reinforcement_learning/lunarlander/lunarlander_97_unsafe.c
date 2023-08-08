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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7335837036110517f && tensor_input[0][0] <= -0.6783558963889482f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0916469163889482f && tensor_input[0][1] <= 0.1468747236110518f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.015157247611051795f && tensor_input[0][2] <= 0.0400705596110518f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.028512037571051793f && tensor_input[0][3] <= 0.026715769651051796f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.1297436086110518f && tensor_input[0][4] <= -0.0745158013889482f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.041689542611051796f && tensor_input[0][5] <= 0.013538264611051795f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.027613903611051795f && tensor_input[0][6] <= 0.027613903611051795f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9723860963889482f && tensor_input[0][7] <= 1.0276139036110519f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
