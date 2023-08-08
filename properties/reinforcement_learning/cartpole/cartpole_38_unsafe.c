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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4653275650674913f && tensor_input[0][0] <= 0.48315743493250873f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6935869349325087f && tensor_input[0][1] <= -0.6757570650674912f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.001748264067491262f && tensor_input[0][2] <= 0.019578133932508738f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.8538347650674912f && tensor_input[0][3] <= 0.8716646349325087f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
