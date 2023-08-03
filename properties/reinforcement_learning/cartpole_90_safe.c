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

	__ESBMC_assume(tensor_input[0][0] >= -0.26130052959386224f && tensor_input[0][0] <= -0.25032697040613777f);
	__ESBMC_assume(tensor_input[0][1] >= -0.05648612659386224f && tensor_input[0][1] <= -0.04551256740613776f);
	__ESBMC_assume(tensor_input[0][2] >= -0.06761689559386225f && tensor_input[0][2] <= -0.05664333640613776f);
	__ESBMC_assume(tensor_input[0][3] >= -0.38437800959386226f && tensor_input[0][3] <= -0.3734044504061378f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
