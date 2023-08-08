#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.25703597204782436f && tensor_input[0][0] <= -0.24828690795217567f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.25318974204782435f && tensor_input[0][1] <= -0.24444067795217567f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.045830142047824346f && tensor_input[0][2] <= -0.03708107795217565f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.03052923204782435f && tensor_input[0][3] <= -0.02178016795217565f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
