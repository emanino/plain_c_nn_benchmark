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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.3937228175183177f && tensor_dense_input[0][0] <= -0.2656125647609292f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5927947530182938f && tensor_dense_input[0][1] <= -0.46468450026090524f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.10062590961095369f && tensor_dense_input[0][2] <= 0.22873616236834216f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.5178325226244828f && tensor_dense_input[0][3] <= -0.38972226986709435f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43594487362130574f && tensor_dense_input[0][4] <= 0.5640551263786943f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06405512637869422f && tensor_dense_input[0][5] <= 0.06405512637869425f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.3761486857887557f && tensor_dense_input[0][6] <= -0.24803843303136727f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.32658231444688557f && tensor_dense_input[0][7] <= 0.4546925672042741f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
