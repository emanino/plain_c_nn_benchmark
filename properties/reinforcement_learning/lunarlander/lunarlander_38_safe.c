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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7966279868249018f && tensor_input[0][0] <= -0.7390830131750983f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.0037580528249017524f && tensor_input[0][1] <= 0.053786920824901746f);
	__VERIFIER_assume(tensor_input[0][2] >= -6.652082490175154f && tensor_input[0][2] <= 0.05747845282490175f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.08940841482490175f && tensor_input[0][3] <= -0.03186344117509825f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.08825887182490175f && tensor_input[0][4] <= -0.030713898175098252f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.10535795682490176f && tensor_input[0][5] <= -0.04781298317509825f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9712275131750983f && tensor_input[0][6] <= 1.0287724868249017f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9712275131750983f && tensor_input[0][7] <= 1.0287724868249017f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
