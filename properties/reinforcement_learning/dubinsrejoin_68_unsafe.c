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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.07773811626491296f && tensor_dense_input[0][0] <= 0.05853368326945828f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.4886635660893647f && tensor_dense_input[0][1] <= -0.3523917665549935f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.08190987853070861f && tensor_dense_input[0][2] <= 0.21818167806507985f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.9624910850851877f && tensor_dense_input[0][3] <= -0.8262192855508165f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4318641002328144f && tensor_dense_input[0][4] <= 0.5681358997671856f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06813589976718562f && tensor_dense_input[0][5] <= 0.06813589976718562f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.26238677129753996f && tensor_dense_input[0][6] <= 0.39865857083191114f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.3070370788869803f && tensor_dense_input[0][7] <= 0.4433088784213516f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}