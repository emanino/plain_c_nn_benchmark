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

	__VERIFIER_assume(tensor_input[0][0] >= -0.05549104989941913f && tensor_input[0][0] <= -0.04762885010058087f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.43609394989941913f && tensor_input[0][1] <= -0.42823175010058084f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.03762770689941913f && tensor_input[0][2] <= -0.029765507100580874f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.4034858001005809f && tensor_input[0][3] <= 0.41134799989941917f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
