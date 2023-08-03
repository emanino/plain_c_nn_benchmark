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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.006394071535556864f && tensor_dense_input[0][0] <= 0.12370113419576527f);
	__ESBMC_assume(tensor_dense_input[0][1] >= 0.29431904072693504f && tensor_dense_input[0][1] <= 0.4244142464582572f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.5063719149758481f && tensor_dense_input[0][2] <= -0.376276709244526f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.28961201737935366f && tensor_dense_input[0][3] <= 0.4197072231106758f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4349523971343389f && tensor_dense_input[0][4] <= 0.565047602865661f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06504760286566111f && tensor_dense_input[0][5] <= 0.06504760286566103f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.18901772064969813f && tensor_dense_input[0][6] <= 0.3191129263810203f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.49568760494052155f && tensor_dense_input[0][7] <= -0.3655923992091994f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
