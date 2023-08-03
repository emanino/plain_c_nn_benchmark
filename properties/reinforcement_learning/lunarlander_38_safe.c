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

	__ESBMC_assume(tensor_input[0][0] >= -0.7966279868249018f && tensor_input[0][0] <= -0.7390830131750983f);
	__ESBMC_assume(tensor_input[0][1] >= -0.0037580528249017524f && tensor_input[0][1] <= 0.053786920824901746f);
	__ESBMC_assume(tensor_input[0][2] >= -6.652082490175154f && tensor_input[0][2] <= 0.05747845282490175f);
	__ESBMC_assume(tensor_input[0][3] >= -0.08940841482490175f && tensor_input[0][3] <= -0.03186344117509825f);
	__ESBMC_assume(tensor_input[0][4] >= -0.08825887182490175f && tensor_input[0][4] <= -0.030713898175098252f);
	__ESBMC_assume(tensor_input[0][5] >= -0.10535795682490176f && tensor_input[0][5] <= -0.04781298317509825f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9712275131750983f && tensor_input[0][6] <= 1.0287724868249017f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9712275131750983f && tensor_input[0][7] <= 1.0287724868249017f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
