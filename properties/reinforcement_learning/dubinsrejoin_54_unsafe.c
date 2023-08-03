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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.6707930376880928f && tensor_dense_input[0][0] <= -0.5328180198414665f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.5467070212969654f && tensor_dense_input[0][1] <= -0.40873200345033905f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.3402818165431491f && tensor_dense_input[0][2] <= -0.20230679869652285f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.1715239557179315f && tensor_dense_input[0][3] <= -0.03354893787130524f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4310124910766869f && tensor_dense_input[0][4] <= 0.5689875089233132f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06898750892331307f && tensor_dense_input[0][5] <= 0.0689875089233132f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.5591611853569471f && tensor_dense_input[0][6] <= -0.4211861675103209f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.02965207203451055f && tensor_dense_input[0][7] <= 0.16762708988113684f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
