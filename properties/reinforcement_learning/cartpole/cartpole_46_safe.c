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

	__VERIFIER_assume(tensor_input[0][0] >= -0.04489402450781046f && tensor_input[0][0] <= -0.03769133549218954f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.5318460154921896f && tensor_input[0][1] <= 0.5390487045078105f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.02116232050781046f && tensor_input[0][2] <= -0.013959631492189541f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.8834883445078104f && tensor_input[0][3] <= -0.8762856554921895f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
