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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.20397852090107246f && tensor_dense_input[0][0] <= -0.16444632545180546f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.4457808643975274f && tensor_dense_input[0][1] <= -0.4062486689482604f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.1265438134057016f && tensor_dense_input[0][2] <= 0.1660760088549686f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.07060758906411423f && tensor_dense_input[0][3] <= -0.031075393614847246f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4802339022753665f && tensor_dense_input[0][4] <= 0.5197660977246334f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.019766097724633384f && tensor_dense_input[0][5] <= 0.0197660977246336f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5099368521377701f && tensor_dense_input[0][6] <= -0.4704046566885031f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.07888800263645872f && tensor_dense_input[0][7] <= 0.1184201980857257f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
