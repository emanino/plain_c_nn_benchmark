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

	__ESBMC_assume(tensor_input[0][0] >= 0.4301837116958922f && tensor_input[0][0] <= 0.4398293483041078f);
	__ESBMC_assume(tensor_input[0][1] >= -0.3041501583041078f && tensor_input[0][1] <= -0.2945045216958922f);
	__ESBMC_assume(tensor_input[0][2] >= 0.0690852116958922f && tensor_input[0][2] <= 0.0787308483041078f);
	__ESBMC_assume(tensor_input[0][3] >= 0.3815771316958922f && tensor_input[0][3] <= 0.3912227683041078f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
