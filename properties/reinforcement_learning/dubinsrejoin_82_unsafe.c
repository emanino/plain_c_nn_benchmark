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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.5567487100761923f && tensor_dense_input[0][0] <= -0.4909662424435784f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.4809086828388161f && tensor_dense_input[0][1] <= -0.41512621520620224f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.2800453663102627f && tensor_dense_input[0][2] <= -0.21426289867764886f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.06445309151033204f && tensor_dense_input[0][3] <= 0.0013293761222818237f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.467108766183693f && tensor_dense_input[0][4] <= 0.5328912338163069f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.03289123381630693f && tensor_dense_input[0][5] <= 0.03289123381630693f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.5319076715778412f && tensor_dense_input[0][6] <= -0.46612520394522744f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.0014866751245136284f && tensor_dense_input[0][7] <= 0.06429579250810023f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
