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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.008737555243152326f && tensor_dense_input[0][0] <= 0.19137643023389905f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.4190580336005932f && tensor_dense_input[0][1] <= -0.2189440481235418f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.5056487042505232f && tensor_dense_input[0][2] <= -0.3055347187734719f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.363566502785764f && tensor_dense_input[0][3] <= -0.16345251730871263f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.39994300726147425f && tensor_dense_input[0][4] <= 0.6000569927385256f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.10005699273852564f && tensor_dense_input[0][5] <= 0.10005699273852572f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.10034150638463056f && tensor_dense_input[0][6] <= 0.3004554918616819f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5581404366100394f && tensor_dense_input[0][7] <= -0.35802645113298803f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
