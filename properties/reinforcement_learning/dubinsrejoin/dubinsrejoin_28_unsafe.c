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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.05265626474167886f && tensor_dense_input[0][0] <= 0.15178236702648348f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.5646663081608658f && tensor_dense_input[0][1] <= -0.36022767639270353f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.5428276390132858f && tensor_dense_input[0][2] <= -0.3383890072451234f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.4660152876659528f && tensor_dense_input[0][3] <= -0.26157665589779044f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.3977806841159188f && tensor_dense_input[0][4] <= 0.6022193158840812f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.10221931588408117f && tensor_dense_input[0][5] <= 0.10221931588408117f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.05743208139386702f && tensor_dense_input[0][6] <= 0.26187071316202937f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.576045688458676f && tensor_dense_input[0][7] <= -0.37160705669051364f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
