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

	__ESBMC_assume(tensor_input[0][0] >= -0.26052960901990324f && tensor_input[0][0] <= -0.25109789098009677f);
	__ESBMC_assume(tensor_input[0][1] >= -0.44585379901990324f && tensor_input[0][1] <= -0.43642208098009677f);
	__ESBMC_assume(tensor_input[0][2] >= -0.06684597501990325f && tensor_input[0][2] <= -0.057414256980096744f);
	__ESBMC_assume(tensor_input[0][3] >= 0.20052031098009673f && tensor_input[0][3] <= 0.20995202901990326f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}