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

	__VERIFIER_assume(tensor_input[0][0] >= -0.25138137359890156f && tensor_input[0][0] <= -0.24178608640109847f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.13577067640109847f && tensor_input[0][1] <= 0.14536596359890153f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.039956359598901536f && tensor_input[0][2] <= -0.030361072401098466f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.5975738435989015f && tensor_input[0][3] <= -0.5879785564010984f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
