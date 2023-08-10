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

	__VERIFIER_assume(tensor_input[0][0] >= -0.25418097836458226f && tensor_input[0][0] <= -0.24184008163541776f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.057172321364582245f && tensor_input[0][1] <= -0.04483142463541776f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.07998837836458224f && tensor_input[0][2] <= -0.06764748163541777f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.38528796836458223f && tensor_input[0][3] <= -0.37294707163541774f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
