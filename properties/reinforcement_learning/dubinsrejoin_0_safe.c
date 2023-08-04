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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.16056551126443652f && tensor_dense_input[0][0] <= 0.013299634067143323f);
	__ESBMC_assume(tensor_dense_input[0][1] >= 0.10775867926444281f && tensor_dense_input[0][1] <= 0.28162382459602264f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.6521301949512726f && tensor_dense_input[0][2] <= -0.47826504961969274f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.016302888021569623f && tensor_dense_input[0][3] <= 0.19016803335314947f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4130674273342099f && tensor_dense_input[0][4] <= 0.5869325726657898f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.08693257266578988f && tensor_dense_input[0][5] <= 0.08693257266578996f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.23805280771716447f && tensor_dense_input[0][6] <= 0.4119179530487443f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.4669121807204149f && tensor_dense_input[0][7] <= -0.2930470353888351f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}