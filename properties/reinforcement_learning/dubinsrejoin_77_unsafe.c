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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.10236427870928264f && tensor_dense_input[0][0] <= -0.06576179369780677f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.4243842020967226f && tensor_dense_input[0][1] <= -0.3877817170852467f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.024623712716520953f && tensor_dense_input[0][2] <= 0.06122619772799682f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.05922106052315422f && tensor_dense_input[0][3] <= 0.09582354553463009f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.48169875749426205f && tensor_dense_input[0][4] <= 0.518301242505738f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.018301242505737916f && tensor_dense_input[0][5] <= 0.01830124250573795f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.5006096810512979f && tensor_dense_input[0][6] <= -0.46400719603982205f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.15012904726537046f && tensor_dense_input[0][7] <= -0.11352656225389458f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}