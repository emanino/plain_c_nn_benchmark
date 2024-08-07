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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4237522201110955f && tensor_input[0][0] <= 0.43106183988890456f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.30155850988890454f && tensor_input[0][1] <= -0.29424889011109545f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.08545468511109545f && tensor_input[0][2] <= 0.09276430488890454f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.35167277011109543f && tensor_input[0][3] <= 0.3589823898889045f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
