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

	__ESBMC_assume(tensor_input[0][0] >= -0.9606387095695442f && tensor_input[0][0] <= -0.7963699704304558f);
	__ESBMC_assume(tensor_input[0][1] >= -0.03409449356954423f && tensor_input[0][1] <= 0.13017424556954424f);
	__ESBMC_assume(tensor_input[0][2] >= 1.0391626304304558f && tensor_input[0][2] <= 1.2034313695695442f);
	__ESBMC_assume(tensor_input[0][3] >= -0.4061008995695442f && tensor_input[0][3] <= -0.24183216043045574f);
	__ESBMC_assume(tensor_input[0][4] >= -0.49100932956954424f && tensor_input[0][4] <= -0.3267405904304558f);
	__ESBMC_assume(tensor_input[0][5] >= -0.08213436378036723f && tensor_input[0][5] <= 0.08213437535872123f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9178656304304558f && tensor_input[0][6] <= 1.0821343695695442f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9178656304304558f && tensor_input[0][7] <= 1.0821343695695442f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
