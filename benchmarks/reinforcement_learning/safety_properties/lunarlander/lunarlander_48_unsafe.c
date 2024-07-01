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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9232500551278165f && tensor_input[0][0] <= -0.8578058648721835f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.023134664872183436f && tensor_input[0][1] <= 0.08857885512781656f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.022464761872183436f && tensor_input[0][2] <= 0.08790895212781656f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.04866675512781656f && tensor_input[0][3] <= 0.016777435127816563f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4415984951278165f && tensor_input[0][4] <= -0.37615430487218343f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03272210056046556f && tensor_input[0][5] <= 0.032722089695167565f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9672779048721835f && tensor_input[0][6] <= 1.0327220951278167f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9672779048721835f && tensor_input[0][7] <= 1.0327220951278167f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
