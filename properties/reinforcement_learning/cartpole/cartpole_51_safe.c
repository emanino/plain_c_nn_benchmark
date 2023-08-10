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

	__VERIFIER_assume(tensor_input[0][0] >= -0.059562969356423155f && tensor_input[0][0] <= -0.04965867464357685f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.24319337735642316f && tensor_input[0][1] <= -0.23328908264357684f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.029512952356423153f && tensor_input[0][2] <= -0.01960865764357685f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.13601620264357683f && tensor_input[0][3] <= 0.14592049735642315f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
