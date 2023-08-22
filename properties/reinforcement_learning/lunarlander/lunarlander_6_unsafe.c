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

	__VERIFIER_assume(tensor_input[0][0] >= -0.950058483844353f && tensor_input[0][0] <= -0.8217653961556469f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.011291279844353033f && tensor_input[0][1] <= 0.11700180784435303f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.775798896155647f && tensor_input[0][2] <= 0.9040919838443531f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.30682464384435304f && tensor_input[0][3] <= -0.17853155615564698f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.473021543844353f && tensor_input[0][4] <= -0.34472845615564696f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.06414654594279003f && tensor_input[0][5] <= 0.06414654174591604f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.935853456155647f && tensor_input[0][6] <= 1.0641465438443531f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.935853456155647f && tensor_input[0][7] <= 1.0641465438443531f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
