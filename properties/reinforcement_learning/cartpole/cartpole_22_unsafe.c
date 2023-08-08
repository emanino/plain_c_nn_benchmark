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

	__VERIFIER_assume(tensor_input[0][0] >= 0.44755975678036136f && tensor_input[0][0] <= 0.5052174432196386f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.12916599821963862f && tensor_input[0][1] <= -0.07150831178036138f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.005377215219638614f && tensor_input[0][2] <= 0.05228047121963861f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.021389378219638613f && tensor_input[0][3] <= 0.03626830821963861f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
