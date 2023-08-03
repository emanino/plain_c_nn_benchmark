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

	__ESBMC_assume(tensor_input[0][0] >= -0.6532962116834482f && tensor_input[0][0] <= -0.5914743883165519f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04907328431655178f && tensor_input[0][1] <= 0.11089510768344821f);
	__ESBMC_assume(tensor_input[0][2] >= 0.002232310316551786f && tensor_input[0][2] <= 0.06405413368344821f);
	__ESBMC_assume(tensor_input[0][3] >= -0.059528274683448214f && tensor_input[0][3] <= 0.002293548683448214f);
	__ESBMC_assume(tensor_input[0][4] >= -0.04182889868344822f && tensor_input[0][4] <= 0.019992924683448213f);
	__ESBMC_assume(tensor_input[0][5] >= 0.024176941316551785f && tensor_input[0][5] <= 0.08599876468344822f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9690890883165518f && tensor_input[0][6] <= 1.0309109116834483f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9690890883165518f && tensor_input[0][7] <= 1.0309109116834483f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
