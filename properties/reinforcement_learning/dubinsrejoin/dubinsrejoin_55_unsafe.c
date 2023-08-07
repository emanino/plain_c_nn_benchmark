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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.46500916063611875f && tensor_dense_input[0][0] <= -0.33290456806444346f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.5551048442251614f && tensor_dense_input[0][1] <= -0.4230002516534861f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.7497377681205526f && tensor_dense_input[0][2] <= -0.6176331755488773f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.9661153308066827f && tensor_dense_input[0][3] <= -0.8340107382350074f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43394770371416236f && tensor_dense_input[0][4] <= 0.5660522962858376f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06605229628583757f && tensor_dense_input[0][5] <= 0.06605229628583766f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.46803695522519473f && tensor_dense_input[0][6] <= 0.60014154779687f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.11007865054156196f && tensor_dense_input[0][7] <= 0.022025942030113273f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
