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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8454067305893308f && tensor_input[0][0] <= -0.7847526694106691f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.0017002685893308632f && tensor_input[0][1] <= 0.05895379258933087f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.08118290341066914f && tensor_input[0][2] <= 0.14183696458933087f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.09291240058933087f && tensor_input[0][3] <= -0.032258339410669135f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.18169751058933087f && tensor_input[0][4] <= -0.12104344941066913f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.25905795058933084f && tensor_input[0][5] <= -0.19840388941066914f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9696729694106692f && tensor_input[0][6] <= 1.0303270305893308f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9696729694106692f && tensor_input[0][7] <= 1.0303270305893308f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
