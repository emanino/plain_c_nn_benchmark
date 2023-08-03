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

	__ESBMC_assume(tensor_input[0][0] >= -0.08793896136497134f && tensor_input[0][0] <= 0.10183800158713932f);
	__ESBMC_assume(tensor_input[0][1] >= 0.10511151852394468f && tensor_input[0][1] <= 0.29488848147605534f);
	__ESBMC_assume(tensor_input[0][2] >= 0.6090046078183783f && tensor_input[0][2] <= 0.798781570770489f);
	__ESBMC_assume(tensor_input[0][3] >= 0.3107399771827989f && tensor_input[0][3] <= 0.5005169401349095f);
	__ESBMC_assume(tensor_input[0][4] >= -0.10293442027335042f && tensor_input[0][4] <= 0.08684254267876024f);
	__ESBMC_assume(tensor_input[0][5] >= -0.254330703594433f && tensor_input[0][5] <= -0.06455374064232236f);
	__ESBMC_assume(tensor_input[0][6] >= -0.09488848147605533f && tensor_input[0][6] <= 0.09488848147605533f);
	__ESBMC_assume(tensor_input[0][7] >= -0.09488848147605533f && tensor_input[0][7] <= 0.09488848147605533f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
