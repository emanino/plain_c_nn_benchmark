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

	__VERIFIER_assume(tensor_input[0][0] >= -0.5776040348502941f && tensor_input[0][0] <= -0.540222905149706f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.10006192514970594f && tensor_input[0][1] <= 0.13744305485029407f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.004887947149705942f && tensor_input[0][2] <= 0.04226907685029406f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.04279462485029406f && tensor_input[0][3] <= -0.005413495149705943f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.027844725850294058f && tensor_input[0][4] <= 0.009536403850294058f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.15315453485029404f && tensor_input[0][5] <= -0.11577340514970594f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.018690564850294057f && tensor_input[0][6] <= 0.018690564850294057f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9813094351497059f && tensor_input[0][7] <= 1.018690564850294f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
