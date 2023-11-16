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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8157109601997901f && tensor_input[0][0] <= -0.72301843980021f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.01567622819978999f && tensor_input[0][1] <= 0.07701629219978999f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06647660719978998f && tensor_input[0][2] <= 0.02621591319978999f);
	__VERIFIER_assume(tensor_input[0][3] >= 7.766280021000854e-05f && tensor_input[0][3] <= 0.09277018319979f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.00018522380021000762f && tensor_input[0][4] <= 0.09287774419978999f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03114800519978999f && tensor_input[0][5] <= 0.06154451519978999f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9536537398002101f && tensor_input[0][6] <= 1.04634626019979f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9536537398002101f && tensor_input[0][7] <= 1.04634626019979f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
