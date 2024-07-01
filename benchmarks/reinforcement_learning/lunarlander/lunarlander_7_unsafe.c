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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9394583624023012f && tensor_input[0][0] <= -0.8230549175976989f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.008372705402301096f && tensor_input[0][1] <= 0.1080307394023011f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.7419515375976988f && tensor_input[0][2] <= 0.8583549824023011f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.2893830324023011f && tensor_input[0][3] <= -0.1729795875976989f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4670767224023011f && tensor_input[0][4] <= -0.3506732775976989f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.058201719946927896f && tensor_input[0][5] <= 0.0582017248576743f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9417982775976989f && tensor_input[0][6] <= 1.058201722402301f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9417982775976989f && tensor_input[0][7] <= 1.058201722402301f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
