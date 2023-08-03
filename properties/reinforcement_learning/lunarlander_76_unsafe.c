#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.8459830427398526f && tensor_input[0][0] <= -0.7893185572601474f);
	__ESBMC_assume(tensor_input[0][1] >= 0.0867694372601474f && tensor_input[0][1] <= 0.14343392273985262f);
	__ESBMC_assume(tensor_input[0][2] >= -0.009497677739852602f && tensor_input[0][2] <= 0.0471668077398526f);
	__ESBMC_assume(tensor_input[0][3] >= -0.036636986739852606f && tensor_input[0][3] <= 0.020027498739852604f);
	__ESBMC_assume(tensor_input[0][4] >= -0.0383110372398526f && tensor_input[0][4] <= 0.018353448239852604f);
	__ESBMC_assume(tensor_input[0][5] >= 0.021131722260147395f && tensor_input[0][5] <= 0.0777962077398526f);
	__ESBMC_assume(tensor_input[0][6] >= -0.028332242739852603f && tensor_input[0][6] <= 0.028332242739852603f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9716677572601474f && tensor_input[0][7] <= 1.0283322427398527f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
