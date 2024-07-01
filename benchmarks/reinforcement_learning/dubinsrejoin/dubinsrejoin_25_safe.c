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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.18638761889537456f && tensor_dense_input[0][0] <= 0.018261546488285152f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5084075422828145f && tensor_dense_input[0][1] <= -0.3037583768991548f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.05939962746957097f && tensor_dense_input[0][2] <= 0.14524953791408873f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.0248022796629377f && tensor_dense_input[0][3] <= 0.179846885720722f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.39767541730817013f && tensor_dense_input[0][4] <= 0.6023245826918299f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10232458269182984f && tensor_dense_input[0][5] <= 0.10232458269182987f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5846330212373898f && tensor_dense_input[0][6] <= -0.3799838558537301f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.23415238745146238f && tensor_dense_input[0][7] <= -0.029503222067802662f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
