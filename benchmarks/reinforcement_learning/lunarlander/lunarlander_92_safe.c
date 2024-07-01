#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.848893249351115f && tensor_input[0][0] <= -0.788168350648885f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.08594923064888496f && tensor_input[0][1] <= 0.14667412935111504f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06571297335111503f && tensor_input[0][2] <= -0.004988074648884969f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.014035949351115032f && tensor_input[0][3] <= 0.04668894935111503f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.010302793648884964f && tensor_input[0][4] <= 0.07102769235111503f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.02573009064888497f && tensor_input[0][5] <= 0.08645498935111504f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.030362449351115033f && tensor_input[0][6] <= 0.030362449351115033f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.969637550648885f && tensor_input[0][7] <= 1.030362449351115f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
