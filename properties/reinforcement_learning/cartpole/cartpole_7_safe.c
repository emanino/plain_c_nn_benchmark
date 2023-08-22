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

	__VERIFIER_assume(tensor_input[0][0] >= 0.012958302295931534f && tensor_input[0][0] <= 0.07294352370406847f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.7518984392959316f && tensor_input[0][1] <= 0.8118836607040685f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.09493331670406846f && tensor_input[0][2] <= -0.034948095295931535f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.2333988107040685f && tensor_input[0][3] <= -1.1734135892959316f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
