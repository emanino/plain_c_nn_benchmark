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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.8088719949995191f && tensor_dense_input[0][0] <= -0.679937817684795f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.2684543078424728f && tensor_dense_input[0][1] <= -0.13952013052774875f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -1.064467088657362f && tensor_dense_input[0][2] <= -0.9355329113426379f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.23705983267961797f && tensor_dense_input[0][3] <= -0.10812565536489391f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43553291134263805f && tensor_dense_input[0][4] <= 0.5644670886573622f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06446708865736196f && tensor_dense_input[0][5] <= 0.0644670886573621f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.15785120510136183f && tensor_dense_input[0][6] <= 0.28678538241608587f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5123226192252113f && tensor_dense_input[0][7] <= -0.38338844191048715f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
