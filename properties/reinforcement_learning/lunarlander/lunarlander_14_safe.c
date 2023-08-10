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

	__VERIFIER_assume(tensor_input[0][0] >= -0.05931865632129312f && tensor_input[0][0] <= 0.06621772706103922f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.13723180830883386f && tensor_input[0][1] <= 0.26276819169116616f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.2866169506351888f && tensor_input[0][2] <= 0.41215333401752113f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.028626090880161527f && tensor_input[0][3] <= 0.09691029250217081f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.06675855315816999f && tensor_input[0][4] <= 0.058777830224162345f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.14190911113811136f && tensor_input[0][5] <= -0.016372727755779026f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.06276819169116617f && tensor_input[0][6] <= 0.06276819169116617f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.06276819169116617f && tensor_input[0][7] <= 0.06276819169116617f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
