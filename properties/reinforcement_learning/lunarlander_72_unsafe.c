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

	__ESBMC_assume(tensor_input[0][0] >= -0.8234760956231935f && tensor_input[0][0] <= -0.7690357043768066f);
	__ESBMC_assume(tensor_input[0][1] >= -0.009925516623193499f && tensor_input[0][1] <= 0.0445148746231935f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0763757026231935f && tensor_input[0][2] <= -0.0219353113768065f);
	__ESBMC_assume(tensor_input[0][3] >= 0.0203859143768065f && tensor_input[0][3] <= 0.0748263056231935f);
	__ESBMC_assume(tensor_input[0][4] >= -0.1666226956231935f && tensor_input[0][4] <= -0.11218230437680651f);
	__ESBMC_assume(tensor_input[0][5] >= -0.0250025510231935f && tensor_input[0][5] <= 0.029437840223193498f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9727798043768066f && tensor_input[0][6] <= 1.0272201956231934f);
	__ESBMC_assume(tensor_input[0][7] >= -0.0272201956231935f && tensor_input[0][7] <= 0.0272201956231935f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
