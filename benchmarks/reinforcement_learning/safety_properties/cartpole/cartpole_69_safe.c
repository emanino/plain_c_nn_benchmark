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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2600140945577128f && tensor_input[0][0] <= -0.2516758654422872f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.4458208145577128f && tensor_input[0][1] <= -0.4374825854422872f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06561146755771281f && tensor_input[0][2] <= -0.05727323844228718f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.21241613544228719f && tensor_input[0][3] <= 0.22075436455771283f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
