#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.9514387801957562f && tensor_input[0][0] <= -0.8170335398042439f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.015436620195756166f && tensor_input[0][1] <= 0.11896862019575616f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.9274280798042438f && tensor_input[0][2] <= 1.0618333201957562f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3545726201957562f && tensor_input[0][3] <= -0.22016737980424383f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4760779201957562f && tensor_input[0][4] <= -0.3416726798042438f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.06720262543064817f && tensor_input[0][5] <= 0.06720261496086416f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9327973798042438f && tensor_input[0][6] <= 1.067202620195756f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9327973798042438f && tensor_input[0][7] <= 1.067202620195756f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
