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

	__ESBMC_assume(tensor_input[0][0] >= -0.26495380459304924f && tensor_input[0][0] <= -0.2623515954069508f);
	__ESBMC_assume(tensor_input[0][1] >= -0.05314113459304924f && tensor_input[0][1] <= -0.05053892540695076f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05096166059304924f && tensor_input[0][2] <= -0.04835945140695076f);
	__ESBMC_assume(tensor_input[0][3] >= -0.36138510459304923f && tensor_input[0][3] <= -0.3587828954069508f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
