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

	__VERIFIER_assume(tensor_input[0][0] >= -0.1002256940590116f && tensor_input[0][0] <= -0.04054062594098839f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6193572340590116f && tensor_input[0][1] <= -0.5596721659409883f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.07871927594098838f && tensor_input[0][2] <= 0.1384043440590116f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.9445111959409884f && tensor_input[0][3] <= 1.0041962640590116f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
