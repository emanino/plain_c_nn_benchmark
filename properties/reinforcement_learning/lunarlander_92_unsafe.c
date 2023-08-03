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

	__ESBMC_assume(tensor_input[0][0] >= -0.848893249351115f && tensor_input[0][0] <= -0.788168350648885f);
	__ESBMC_assume(tensor_input[0][1] >= 0.08594923064888496f && tensor_input[0][1] <= 0.14667412935111504f);
	__ESBMC_assume(tensor_input[0][2] >= -0.06571297335111503f && tensor_input[0][2] <= -0.004988074648884969f);
	__ESBMC_assume(tensor_input[0][3] >= -0.014035949351115032f && tensor_input[0][3] <= 0.04668894935111503f);
	__ESBMC_assume(tensor_input[0][4] >= 0.010302793648884964f && tensor_input[0][4] <= 0.07102769235111503f);
	__ESBMC_assume(tensor_input[0][5] >= 0.02573009064888497f && tensor_input[0][5] <= 0.08645498935111504f);
	__ESBMC_assume(tensor_input[0][6] >= -0.030362449351115033f && tensor_input[0][6] <= 0.030362449351115033f);
	__ESBMC_assume(tensor_input[0][7] >= 0.969637550648885f && tensor_input[0][7] <= 1.030362449351115f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
