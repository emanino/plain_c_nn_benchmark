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

	__ESBMC_assume(tensor_input[0][0] >= -0.7190420036942333f && tensor_input[0][0] <= -0.6522424763057666f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04372841630576669f && tensor_input[0][1] <= 0.11052794369423333f);
	__ESBMC_assume(tensor_input[0][2] >= -0.052798484694233316f && tensor_input[0][2] <= 0.014001042694233315f);
	__ESBMC_assume(tensor_input[0][3] >= -0.032963322394233316f && tensor_input[0][3] <= 0.033836204994233315f);
	__ESBMC_assume(tensor_input[0][4] >= 0.013080240305766683f && tensor_input[0][4] <= 0.07987976769423331f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03294152784423331f && tensor_input[0][5] <= 0.03385799954423332f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9666002363057666f && tensor_input[0][6] <= 1.0333997636942334f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9666002363057666f && tensor_input[0][7] <= 1.0333997636942334f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
