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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7701438160992213f && tensor_input[0][0] <= -0.6782805239007788f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.009723746099221331f && tensor_input[0][1] <= 0.08213954609922133f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.09550839609922133f && tensor_input[0][2] <= -0.0036451039007786706f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.016940673900778663f && tensor_input[0][3] <= 0.10880396609922133f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05853963390077867f && tensor_input[0][4] <= 0.15040292609922135f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.012238343900778666f && tensor_input[0][5] <= 0.10410163609922132f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9540683539007787f && tensor_input[0][6] <= 1.0459316460992214f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9540683539007787f && tensor_input[0][7] <= 1.0459316460992214f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
