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

	__VERIFIER_assume(tensor_input[0][0] >= -0.038745839847399176f && tensor_input[0][0] <= -0.03325653415260082f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.43541509284739915f && tensor_input[0][1] <= -0.4299257871526008f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05876692284739918f && tensor_input[0][2] <= -0.05327761715260082f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.4163375071526008f && tensor_input[0][3] <= 0.42182681284739915f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
