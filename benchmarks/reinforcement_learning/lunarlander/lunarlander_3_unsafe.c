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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9724670055079366f && tensor_input[0][0] <= -0.7767847144920633f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05232247550793666f && tensor_input[0][1] <= 0.14335981550793664f);
	__VERIFIER_assume(tensor_input[0][2] >= 1.2228774544920633f && tensor_input[0][2] <= 1.4185597455079366f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.47942486550793667f && tensor_input[0][3] <= -0.28374257449206336f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.5067163155079366f && tensor_input[0][4] <= -0.31103402449206335f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.09784114010215166f && tensor_input[0][5] <= 0.09784115091372166f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9021588544920633f && tensor_input[0][6] <= 1.0978411455079367f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9021588544920633f && tensor_input[0][7] <= 1.0978411455079367f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
