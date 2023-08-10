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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9440170794028174f && tensor_input[0][0] <= -0.8430755205971826f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.007348430597182584f && tensor_input[0][1] <= 0.10828998940281742f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.9978921205971827f && tensor_input[0][2] <= 1.0988336794028175f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3487003294028174f && tensor_input[0][3] <= -0.2477587705971826f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4593488094028174f && tensor_input[0][4] <= -0.3584072505971826f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.07312906040281741f && tensor_input[0][5] <= 0.02781249840281742f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9495292205971826f && tensor_input[0][6] <= 1.0504707794028174f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.05047077940281742f && tensor_input[0][7] <= 0.05047077940281742f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
