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

	__ESBMC_assume(tensor_input[0][0] >= 0.43428907418671936f && tensor_input[0][0] <= 0.4514085858132807f);
	__ESBMC_assume(tensor_input[0][1] >= -0.6968941558132806f && tensor_input[0][1] <= -0.6797746441867194f);
	__ESBMC_assume(tensor_input[0][2] >= 0.05279629418671936f && tensor_input[0][2] <= 0.06991580581328065f);
	__ESBMC_assume(tensor_input[0][3] >= 0.9362703441867194f && tensor_input[0][3] <= 0.9533898558132806f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
