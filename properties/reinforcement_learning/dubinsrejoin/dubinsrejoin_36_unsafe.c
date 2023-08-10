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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8092509252372937f && tensor_dense_input[0][0] <= -0.6793923339208388f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.563300330941224f && tensor_dense_input[0][1] <= -0.43344173962476906f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0649292956582275f && tensor_dense_input[0][2] <= -0.9350707043417725f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.6951441537916206f && tensor_dense_input[0][3] <= -0.5652855624751657f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43507070434177264f && tensor_dense_input[0][4] <= 0.5649292956582276f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0649292956582274f && tensor_dense_input[0][5] <= 0.06492929565822748f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.3159162371757339f && tensor_dense_input[0][6] <= 0.44577482849218886f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.4419522771448746f && tensor_dense_input[0][7] <= -0.3120936858284197f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
