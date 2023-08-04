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

	__ESBMC_assume(tensor_input[0][0] >= 0.44835436239802035f && tensor_input[0][0] <= 0.4845709176019796f);
	__ESBMC_assume(tensor_input[0][1] >= 0.07590218739802035f && tensor_input[0][1] <= 0.11211874260197965f);
	__ESBMC_assume(tensor_input[0][2] >= 0.011716852398020342f && tensor_input[0][2] <= 0.04793340760197966f);
	__ESBMC_assume(tensor_input[0][3] >= -0.2864156776019796f && tensor_input[0][3] <= -0.25019912239802033f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}