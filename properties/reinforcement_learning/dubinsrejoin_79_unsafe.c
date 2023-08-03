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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.4064822454792304f && tensor_dense_input[0][0] <= -0.33645195630431113f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.8120889270668402f && tensor_dense_input[0][1] <= -0.7420586378919211f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.7685639725957392f && tensor_dense_input[0][2] <= -0.69853368342082f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.46727474103568306f && tensor_dense_input[0][3] <= -0.3972444518607638f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.46498485541254037f && tensor_dense_input[0][4] <= 0.5350151445874596f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.03501514458745966f && tensor_dense_input[0][5] <= 0.03501514458745959f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.1525921257174435f && tensor_dense_input[0][6] <= -0.08256183654252425f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5209942115320755f && tensor_dense_input[0][7] <= -0.4509639223571562f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
