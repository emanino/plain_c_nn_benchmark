#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.38795096041251415f && tensor_dense_input[0][0] <= -0.2566048051934405f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.1310123765158409f && tensor_dense_input[0][1] <= 0.00033377870323278436f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.8197944125068738f && tensor_dense_input[0][2] <= -0.6884482572878f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= 0.12100197403434122f && tensor_dense_input[0][3] <= 0.25234812925341493f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43432692239046317f && tensor_dense_input[0][4] <= 0.5656730776095369f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06567307760953685f && tensor_dense_input[0][5] <= 0.06567307760953685f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.0680021812570553f && tensor_dense_input[0][6] <= 0.0633439739620184f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5656676528563079f && tensor_dense_input[0][7] <= -0.43432149763723427f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
