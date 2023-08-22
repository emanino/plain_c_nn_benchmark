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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9470747485103914f && tensor_input[0][0] <= -0.8143304514896086f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.01690319151039136f && tensor_input[0][1] <= 0.11584110551039137f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.8825913114896087f && tensor_input[0][2] <= 1.0153356085103913f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.34054787851039137f && tensor_input[0][3] <= -0.20780358148960865f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.47524731851039137f && tensor_input[0][4] <= -0.34250302148960865f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.06637215464836996f && tensor_input[0][5] <= 0.06637214237241276f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9336278514896086f && tensor_input[0][6] <= 1.0663721485103914f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9336278514896086f && tensor_input[0][7] <= 1.0663721485103914f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
