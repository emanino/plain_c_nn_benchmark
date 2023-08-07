#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= 0.4478853364225503f && tensor_input[0][0] <= 0.4537641435774497f);
	__ESBMC_assume(tensor_input[0][1] >= -0.6880860335774497f && tensor_input[0][1] <= -0.6822072264225503f);
	__ESBMC_assume(tensor_input[0][2] >= 0.04291683042255032f && tensor_input[0][2] <= 0.04879563757744969f);
	__ESBMC_assume(tensor_input[0][3] >= 0.8708827464225503f && tensor_input[0][3] <= 0.8767615535774497f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
