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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.40095390566640376f && tensor_dense_input[0][0] <= -0.2016807307128523f);
	__ESBMC_assume(tensor_dense_input[0][1] >= 0.2993720261633444f && tensor_dense_input[0][1] <= 0.49864520111689586f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.09963658747677574f && tensor_dense_input[0][2] <= 0.09963658747677574f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.09963658747677574f && tensor_dense_input[0][3] <= 0.09963658747677574f);
	__ESBMC_assume(tensor_dense_input[0][4] >= -1.0095593100787061f && tensor_dense_input[0][4] <= -0.8102861351251546f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.09963658747677574f && tensor_dense_input[0][5] <= 0.09963658747677574f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.505696954733892f && tensor_dense_input[0][6] <= -0.30642377978034047f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.11966332834269629f && tensor_dense_input[0][7] <= 0.3189365032962478f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
