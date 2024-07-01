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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7351071629178138f && tensor_input[0][0] <= -0.6768279370821862f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.09023371708218626f && tensor_input[0][1] <= 0.14851294291781375f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.018152386917813738f && tensor_input[0][2] <= 0.04012683891781374f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.030803344717813735f && tensor_input[0][3] <= 0.02747588111781374f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.06600761708218626f && tensor_input[0][4] <= 0.12428684291781374f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.04273582491781373f && tensor_input[0][5] <= 0.015543400917813737f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9708603870821862f && tensor_input[0][6] <= 1.0291396129178136f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9708603870821862f && tensor_input[0][7] <= 1.0291396129178136f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
