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

	__ESBMC_assume(tensor_dense_input[0][0] >= 0.03702457633780623f && tensor_dense_input[0][0] <= 0.23800421105934402f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.384186345917772f && tensor_dense_input[0][1] <= -0.18320671119623422f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.4285694097817215f && tensor_dense_input[0][2] <= -0.22758977506018369f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.20191665537836112f && tensor_dense_input[0][3] <= -0.0009370206568233425f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.3995101826392311f && tensor_dense_input[0][4] <= 0.6004898173607689f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.10048981736076884f && tensor_dense_input[0][5] <= 0.10048981736076895f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.02554300664806361f && tensor_dense_input[0][6] <= 0.17543662807347418f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.594840882459241f && tensor_dense_input[0][7] <= -0.39386124773770326f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
