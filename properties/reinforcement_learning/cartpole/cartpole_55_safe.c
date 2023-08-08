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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2452663574144357f && tensor_input[0][0] <= -0.23518842258556433f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05604914741443569f && tensor_input[0][1] <= -0.04597121258556432f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.09010839241443569f && tensor_input[0][2] <= -0.08003045758556432f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.38429068741443567f && tensor_input[0][3] <= -0.37421275258556436f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
