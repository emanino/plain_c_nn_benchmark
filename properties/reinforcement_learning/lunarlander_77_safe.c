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

	__ESBMC_assume(tensor_input[0][0] >= -0.7054829725514121f && tensor_input[0][0] <= -0.6638715074485878f);
	__ESBMC_assume(tensor_input[0][1] >= 0.05398427744858783f && tensor_input[0][1] <= 0.09559574255141218f);
	__ESBMC_assume(tensor_input[0][2] >= 0.007976327448587828f && tensor_input[0][2] <= 0.04958779255141217f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05064495255141217f && tensor_input[0][3] <= -0.009033487448587826f);
	__ESBMC_assume(tensor_input[0][4] >= -0.02702799085141217f && tensor_input[0][4] <= 0.014583474251412173f);
	__ESBMC_assume(tensor_input[0][5] >= -0.07321836955141217f && tensor_input[0][5] <= -0.031606904448587825f);
	__ESBMC_assume(tensor_input[0][6] >= -0.020805732551412173f && tensor_input[0][6] <= 0.020805732551412173f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9791942674485878f && tensor_input[0][7] <= 1.0208057325514122f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
