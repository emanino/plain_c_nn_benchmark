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

	__VERIFIER_assume(tensor_input[0][0] >= -0.02351854246603059f && tensor_input[0][0] <= -0.020126593533969412f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.1456814855339694f && tensor_input[0][1] <= 0.14907343446603058f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.055615237466030594f && tensor_input[0][2] <= -0.05222328853396941f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3445694744660306f && tensor_input[0][3] <= -0.3411775255339694f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
