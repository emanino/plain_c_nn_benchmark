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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.019805697967143973f && tensor_dense_input[0][0] <= 0.018055142486060077f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.43432384934846674f && tensor_dense_input[0][1] <= -0.3964630088952627f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.026270790981882806f && tensor_dense_input[0][2] <= 0.06413163143508685f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.932196279963111f && tensor_dense_input[0][3] <= -0.8943354395099069f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.481069579773398f && tensor_dense_input[0][4] <= 0.5189304202266021f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.018930420226602036f && tensor_dense_input[0][5] <= 0.018930420226602015f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.3892015080550668f && tensor_dense_input[0][6] <= 0.42706234850827085f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.26990920502777116f && tensor_dense_input[0][7] <= 0.3077700454809752f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
