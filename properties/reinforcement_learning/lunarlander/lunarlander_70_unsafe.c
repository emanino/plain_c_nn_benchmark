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

	__ESBMC_assume(tensor_input[0][0] >= -0.7967708909096712f && tensor_input[0][0] <= -0.7390369090903287f);
	__ESBMC_assume(tensor_input[0][1] >= -0.003775523909671282f && tensor_input[0][1] <= 0.053958457909671284f);
	__ESBMC_assume(tensor_input[0][2] >= 0.002744235090328718f && tensor_input[0][2] <= 0.060478216909671284f);
	__ESBMC_assume(tensor_input[0][3] >= -0.08943041690967128f && tensor_input[0][3] <= -0.03169643509032871f);
	__ESBMC_assume(tensor_input[0][4] >= -0.00016407990967128028f && tensor_input[0][4] <= 0.05756990190967128f);
	__ESBMC_assume(tensor_input[0][5] >= -0.12387810590967127f && tensor_input[0][5] <= -0.06614412409032872f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9711330090903287f && tensor_input[0][6] <= 1.0288669909096713f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9711330090903287f && tensor_input[0][7] <= 1.0288669909096713f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
