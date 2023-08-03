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

	__ESBMC_assume(tensor_dense_input[0][0] >= 0.3239335752156839f && tensor_dense_input[0][0] <= 0.36218610947840546f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.5395055407587253f && tensor_dense_input[0][1] <= -0.5012530064960037f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.8110424577714795f && tensor_dense_input[0][2] <= 0.8492949920342011f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.6523104011825773f && tensor_dense_input[0][3] <= -0.6140578669198558f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4808737328686392f && tensor_dense_input[0][4] <= 0.5191262671313608f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.019126267131360772f && tensor_dense_input[0][5] <= 0.019126267131360786f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.1649888336118446f && tensor_dense_input[0][6] <= -0.12673629934912303f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.4591248297829342f && tensor_dense_input[0][7] <= 0.49737736404565575f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
