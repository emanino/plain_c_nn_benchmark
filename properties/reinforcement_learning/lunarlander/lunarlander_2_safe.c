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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9723215704211238f && tensor_input[0][0] <= -0.7667499095788762f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.0605761504211238f && tensor_input[0][1] <= 0.1449955104211238f);
	__VERIFIER_assume(tensor_input[0][2] >= 1.5250358695788762f && tensor_input[0][2] <= 1.7306075304211237f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.5730981604211238f && tensor_input[0][3] <= -0.3675264995788762f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.5116608504211237f && tensor_input[0][4] <= -0.3060891895788762f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.1027858334067964f && tensor_input[0][5] <= 0.1027858274354512f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.8972141695788762f && tensor_input[0][6] <= 1.1027858304211238f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.8972141695788762f && tensor_input[0][7] <= 1.1027858304211238f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
