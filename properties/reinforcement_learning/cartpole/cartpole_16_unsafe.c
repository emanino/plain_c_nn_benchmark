#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= 0.027613534111327276f && tensor_input[0][0] <= 0.06624355988867273f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.3740514171113273f && tensor_input[0][1] <= 0.4126814428886727f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.09178783288867272f && tensor_input[0][2] <= -0.05315780711132727f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.6749981728886728f && tensor_input[0][3] <= -0.6363681471113273f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
