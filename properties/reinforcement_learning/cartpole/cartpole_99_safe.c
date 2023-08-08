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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4724894173747478f && tensor_input[0][0] <= 0.47628104262525217f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6875905126252522f && tensor_input[0][1] <= -0.6837988873747478f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.021629274374747848f && tensor_input[0][2] <= 0.025420899625252152f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.8835106873747478f && tensor_input[0][3] <= 0.8873023126252522f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
