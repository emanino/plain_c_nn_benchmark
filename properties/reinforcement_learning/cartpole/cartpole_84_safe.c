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

	__ESBMC_assume(tensor_input[0][0] >= 0.4855698671426743f && tensor_input[0][0] <= 0.4946252328573257f);
	__ESBMC_assume(tensor_input[0][1] >= -0.2997330628573257f && tensor_input[0][1] <= -0.29067769714267433f);
	__ESBMC_assume(tensor_input[0][2] >= 0.0013259756426743123f && tensor_input[0][2] <= 0.010381341357325689f);
	__ESBMC_assume(tensor_input[0][3] >= 0.2899963571426743f && tensor_input[0][3] <= 0.2990517228573257f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
