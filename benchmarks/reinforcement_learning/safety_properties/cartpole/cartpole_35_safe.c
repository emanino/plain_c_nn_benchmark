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

	__VERIFIER_assume(tensor_input[0][0] >= -0.033461210797767704f && tensor_input[0][0] <= -0.008245289202232296f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.3291068992022323f && tensor_input[0][1] <= 0.3543228207977677f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0658496457977677f && tensor_input[0][2] <= -0.040633724202232296f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.6311115607977678f && tensor_input[0][3] <= -0.6058956392022323f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
