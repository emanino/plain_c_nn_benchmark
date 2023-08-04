#include <math.h>

void entry(const float tensor_input[1][14], float tensor_output[1][14]);

int main()
{
	float tensor_input[1][14];
	float tensor_output[1][14];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();
	tensor_input[0][8] = nondet_float();
	tensor_input[0][9] = nondet_float();
	tensor_input[0][10] = nondet_float();
	tensor_input[0][11] = nondet_float();
	tensor_input[0][12] = nondet_float();
	tensor_input[0][13] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -1.7492930226200185f && tensor_input[0][0] <= 1.7312612073369356f);
	__ESBMC_assume(tensor_input[0][1] >= -1.7306896924315087f && tensor_input[0][1] <= 1.7194907929960244f);
	__ESBMC_assume(tensor_input[0][2] >= -1.9349721659028138f && tensor_input[0][2] <= 1.9428233429947497f);
	__ESBMC_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__ESBMC_assume(tensor_input[0][4] >= 0.855546939130923f && tensor_input[0][4] <= 5.195179481948719f);
	__ESBMC_assume(tensor_input[0][5] >= -1.9081205438716633f && tensor_input[0][5] <= 1.9746224801694388f);
	__ESBMC_assume(tensor_input[0][6] >= -1.9403671035597638f && tensor_input[0][6] <= 1.9288622053625426f);
	__ESBMC_assume(tensor_input[0][7] >= -1.974923009835511f && tensor_input[0][7] <= 1.9648060037229853f);
	__ESBMC_assume(tensor_input[0][8] >= -1.9491115354393542f && tensor_input[0][8] <= 1.9173270602587318f);
	__ESBMC_assume(tensor_input[0][9] >= -1.956702659197568f && tensor_input[0][9] <= 1.954074101936532f);
	__ESBMC_assume(tensor_input[0][10] >= -1.940578776877665f && tensor_input[0][10] <= 1.913979802703993f);
	__ESBMC_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__ESBMC_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__ESBMC_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
