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

	__ESBMC_assume(tensor_input[0][0] >= -0.813266777676871f && tensor_input[0][0] <= -0.759620822323129f);
	__ESBMC_assume(tensor_input[0][1] >= 0.01862559732312897f && tensor_input[0][1] <= 0.07227155267687102f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0035029786768710283f && tensor_input[0][2] <= 0.05014297667687103f);
	__ESBMC_assume(tensor_input[0][3] >= -0.07208899167687102f && tensor_input[0][3] <= -0.01844303632312897f);
	__ESBMC_assume(tensor_input[0][4] >= -0.053097708676871025f && tensor_input[0][4] <= 0.0005482466768710302f);
	__ESBMC_assume(tensor_input[0][5] >= -0.09186298767687102f && tensor_input[0][5] <= -0.038217032323128966f);
	__ESBMC_assume(tensor_input[0][6] >= 0.973177022323129f && tensor_input[0][6] <= 1.0268229776768711f);
	__ESBMC_assume(tensor_input[0][7] >= 0.973177022323129f && tensor_input[0][7] <= 1.0268229776768711f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
