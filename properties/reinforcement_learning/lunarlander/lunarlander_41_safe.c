#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.7948730742421312f && tensor_input[0][0] <= -0.7407702657578689f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.0020713022421311456f && tensor_input[0][1] <= 0.05203150624213115f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0016485297578688538f && tensor_input[0][2] <= 0.055751338242131146f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.08832662424213114f && tensor_input[0][3] <= -0.034223815757868856f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.13228162424213114f && tensor_input[0][4] <= -0.07817881575786885f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.10372959424213114f && tensor_input[0][5] <= -0.049626785757868844f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9729485957578689f && tensor_input[0][6] <= 1.027051404242131f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9729485957578689f && tensor_input[0][7] <= 1.027051404242131f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
