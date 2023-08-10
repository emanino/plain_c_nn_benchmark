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

	__VERIFIER_assume(tensor_input[0][0] >= 0.042135729200575824f && tensor_input[0][0] <= 0.11430241079942419f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.16429373920057583f && tensor_input[0][1] <= 0.2364604207994242f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.15709388079942418f && tensor_input[0][2] <= -0.08492719920057581f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.44746284079942417f && tensor_input[0][3] <= -0.37529615920057585f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
