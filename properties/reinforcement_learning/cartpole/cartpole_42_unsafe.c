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

	__ESBMC_assume(tensor_input[0][0] >= 0.4237522201110955f && tensor_input[0][0] <= 0.43106183988890456f);
	__ESBMC_assume(tensor_input[0][1] >= -0.30155850988890454f && tensor_input[0][1] <= -0.29424889011109545f);
	__ESBMC_assume(tensor_input[0][2] >= 0.08545468511109545f && tensor_input[0][2] <= 0.09276430488890454f);
	__ESBMC_assume(tensor_input[0][3] >= 0.35167277011109543f && tensor_input[0][3] <= 0.3589823898889045f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
