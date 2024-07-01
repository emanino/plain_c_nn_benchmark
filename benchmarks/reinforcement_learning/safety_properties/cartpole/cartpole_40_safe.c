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

	__VERIFIER_assume(tensor_input[0][0] >= -0.4092895047644313f && tensor_input[0][0] <= -0.38679693523556863f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.8730294152355687f && tensor_input[0][1] <= 0.8955219847644313f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.14249628476443132f && tensor_input[0][2] <= -0.12000371523556867f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.2744639847644312f && tensor_input[0][3] <= -1.2519714152355688f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
