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

	__VERIFIER_assume(tensor_input[0][0] >= -0.32662237850330955f && tensor_input[0][0] <= -0.23637622149669044f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.09789196149669044f && tensor_input[0][1] <= 0.18813811850330958f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.7615219185033095f && tensor_input[0][2] <= -0.6712757614966904f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.5374372814966905f && tensor_input[0][3] <= 0.6276834385033095f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.008093011503309572f && tensor_input[0][4] <= 0.08215314550330957f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.4216239714966904f && tensor_input[0][5] <= 0.5118701285033096f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.04512307850330957f && tensor_input[0][6] <= 0.04512307850330957f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.04512307850330957f && tensor_input[0][7] <= 0.04512307850330957f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
