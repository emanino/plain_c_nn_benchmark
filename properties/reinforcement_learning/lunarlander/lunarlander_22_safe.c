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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8360154391186349f && tensor_input[0][0] <= -0.7661393008813652f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.08600846488136514f && tensor_input[0][1] <= 0.15588460311863483f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.12910619088136516f && tensor_input[0][2] <= 0.19898232911863484f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07151653911863486f && tensor_input[0][3] <= -0.0016404008813651477f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.07714303411863485f && tensor_input[0][4] <= -0.007266895881365143f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.007763591118634856f && tensor_input[0][5] <= 0.062112547118634856f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9650619308813652f && tensor_input[0][6] <= 1.034938069118635f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9650619308813652f && tensor_input[0][7] <= 1.034938069118635f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
