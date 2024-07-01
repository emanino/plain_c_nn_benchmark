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

	__VERIFIER_assume(tensor_input[0][0] >= -0.4586914544908906f && tensor_input[0][0] <= -0.4001893055091094f);
	__VERIFIER_assume(tensor_input[0][1] >= 1.2428999255091095f && tensor_input[0][1] <= 1.3014020744908905f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.11760121449089056f && tensor_input[0][2] <= -0.05909906550910943f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.8212117744908904f && tensor_input[0][3] <= -1.7627096255091095f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
