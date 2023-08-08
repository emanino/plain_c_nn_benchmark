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

	__VERIFIER_assume(tensor_input[0][0] >= -0.4176180902258744f && tensor_input[0][0] <= -0.35869962977412556f);
	__VERIFIER_assume(tensor_input[0][1] >= 1.0512665697741255f && tensor_input[0][1] <= 1.1101850302258744f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.1742811902258744f && tensor_input[0][2] <= -0.11536272977412558f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.6190694302258746f && tensor_input[0][3] <= -1.5601509697741256f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
