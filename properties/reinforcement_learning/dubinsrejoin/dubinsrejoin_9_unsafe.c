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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.008737555243152326f && tensor_dense_input[0][0] <= 0.19137643023389905f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.4190580336005932f && tensor_dense_input[0][1] <= -0.2189440481235418f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.5056487042505232f && tensor_dense_input[0][2] <= -0.3055347187734719f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.363566502785764f && tensor_dense_input[0][3] <= -0.16345251730871263f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.39994300726147425f && tensor_dense_input[0][4] <= 0.6000569927385256f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10005699273852564f && tensor_dense_input[0][5] <= 0.10005699273852572f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.10034150638463056f && tensor_dense_input[0][6] <= 0.3004554918616819f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5581404366100394f && tensor_dense_input[0][7] <= -0.35802645113298803f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
