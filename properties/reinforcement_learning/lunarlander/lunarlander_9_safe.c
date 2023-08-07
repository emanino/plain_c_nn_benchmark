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

	__ESBMC_assume(tensor_input[0][0] >= -0.909101069068286f && tensor_input[0][0] <= -0.815993530931714f);
	__ESBMC_assume(tensor_input[0][1] >= -0.008887176068286026f && tensor_input[0][1] <= 0.08422036206828602f);
	__ESBMC_assume(tensor_input[0][2] >= 0.23125066093171398f && tensor_input[0][2] <= 0.324358199068286f);
	__ESBMC_assume(tensor_input[0][3] >= -0.10599615906828602f && tensor_input[0][3] <= -0.012888620931713973f);
	__ESBMC_assume(tensor_input[0][4] >= -0.455428269068286f && tensor_input[0][4] <= -0.36232073093171396f);
	__ESBMC_assume(tensor_input[0][5] >= 0.054592414931713976f && tensor_input[0][5] <= 0.14769995306828604f);
	__ESBMC_assume(tensor_input[0][6] >= 0.953446230931714f && tensor_input[0][6] <= 1.046553769068286f);
	__ESBMC_assume(tensor_input[0][7] >= 0.953446230931714f && tensor_input[0][7] <= 1.046553769068286f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
