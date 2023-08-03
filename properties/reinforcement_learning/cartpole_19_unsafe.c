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

	__ESBMC_assume(tensor_input[0][0] >= 0.43408457524598104f && tensor_input[0][0] <= 0.4870935847540189f);
	__ESBMC_assume(tensor_input[0][1] >= -0.12717298475401895f && tensor_input[0][1] <= -0.07416397524598106f);
	__ESBMC_assume(tensor_input[0][2] >= 0.008539193245981055f && tensor_input[0][2] <= 0.06154820275401894f);
	__ESBMC_assume(tensor_input[0][3] >= -0.011750659754018943f && tensor_input[0][3] <= 0.041258349754018944f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
