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

	__ESBMC_assume(tensor_input[0][0] >= 0.026254261999269675f && tensor_input[0][0] <= 0.044078618000730325f);
	__ESBMC_assume(tensor_input[0][1] >= 0.18796220199926966f && tensor_input[0][1] <= 0.2057865580007303f);
	__ESBMC_assume(tensor_input[0][2] >= -0.06258983800073033f && tensor_input[0][2] <= -0.04476548199926968f);
	__ESBMC_assume(tensor_input[0][3] >= -0.3406716580007303f && tensor_input[0][3] <= -0.3228473019992697f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
