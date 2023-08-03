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

	__ESBMC_assume(tensor_input[0][0] >= -0.2877480488532523f && tensor_input[0][0] <= -0.2707728711467477f);
	__ESBMC_assume(tensor_input[0][1] >= -0.45068348885325227f && tensor_input[0][1] <= -0.4337083111467477f);
	__ESBMC_assume(tensor_input[0][2] >= -0.034756623853252316f && tensor_input[0][2] <= -0.017781446146747683f);
	__ESBMC_assume(tensor_input[0][3] >= 0.2197477011467477f && tensor_input[0][3] <= 0.23672287885325233f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
