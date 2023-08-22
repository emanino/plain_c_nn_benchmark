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

	__VERIFIER_assume(tensor_input[0][0] >= -0.649436014842642f && tensor_input[0][0] <= -0.5954015051573579f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.05299362115735791f && tensor_input[0][1] <= 0.10702813084264208f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.004177005157357919f && tensor_input[0][2] <= 0.05821151484264209f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.055336564842642086f && tensor_input[0][3] <= -0.0013020551573579182f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05669471515735791f && tensor_input[0][4] <= 0.11072922484264208f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.030480973157357916f && tensor_input[0][5] <= 0.08451548284264208f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9729827451573579f && tensor_input[0][6] <= 1.0270172548426422f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9729827451573579f && tensor_input[0][7] <= 1.0270172548426422f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
