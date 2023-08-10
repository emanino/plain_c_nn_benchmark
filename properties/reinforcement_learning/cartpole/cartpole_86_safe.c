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

	__VERIFIER_assume(tensor_input[0][0] >= -0.25661109096866197f && tensor_input[0][0] <= -0.2451389090313381f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.13748726903133807f && tensor_input[0][1] <= 0.14895945096866192f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06651282396866194f && tensor_input[0][2] <= -0.05504064203133806f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.6577961909686619f && tensor_input[0][3] <= -0.6463240090313381f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
