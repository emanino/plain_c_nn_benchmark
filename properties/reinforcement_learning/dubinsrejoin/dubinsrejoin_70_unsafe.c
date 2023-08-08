#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.7683667925781611f && tensor_dense_input[0][0] <= -0.6963232150275575f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0360217887753018f && tensor_dense_input[0][1] <= -0.9639782112246982f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9506186168892722f && tensor_dense_input[0][2] <= -0.8785750393386685f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0360217887753018f && tensor_dense_input[0][3] <= -0.9639782112246982f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4639782112246982f && tensor_dense_input[0][4] <= 0.5360217887753018f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.036021788775301836f && tensor_dense_input[0][5] <= 0.036021788775301794f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.45832640004841474f && tensor_dense_input[0][6] <= 0.5303699775990184f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.038943991462824644f && tensor_dense_input[0][7] <= 0.11098756901342827f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
