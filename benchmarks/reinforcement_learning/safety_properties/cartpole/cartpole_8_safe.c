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

	__VERIFIER_assume(tensor_input[0][0] >= 0.04191635498813779f && tensor_input[0][0] <= 0.09872842501186221f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.7548525249881378f && tensor_input[0][1] <= 0.8116645950118623f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.1355923600118622f && tensor_input[0][2] <= -0.0787802899881378f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.2658573350118623f && tensor_input[0][3] <= -1.2090452649881378f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
