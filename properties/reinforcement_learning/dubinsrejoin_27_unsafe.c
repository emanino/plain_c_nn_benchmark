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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.39403104563326663f && tensor_dense_input[0][0] <= -0.26445494741427633f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.9384238793402913f && tensor_dense_input[0][1] <= -0.8088477811213011f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.03284185738464693f && tensor_dense_input[0][2] <= 0.1624179556036372f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.0647880491094952f && tensor_dense_input[0][3] <= -0.9352119508905049f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43521195089050496f && tensor_dense_input[0][4] <= 0.5647880491094952f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.0647880491094952f && tensor_dense_input[0][5] <= 0.06478804910949507f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.05275910748283455f && tensor_dense_input[0][6] <= 0.07681699073615572f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.4350672345110168f && tensor_dense_input[0][7] <= 0.5646433327300071f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
