#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.17326250724237857f && tensor_dense_input[0][0] <= 0.02599663004508536f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.09506168328650078f && tensor_dense_input[0][1] <= 0.2943208205739647f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.6648271909292146f && tensor_dense_input[0][2] <= -0.4655680536417507f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= 0.003605892043627587f && tensor_dense_input[0][3] <= 0.20286502933109152f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4003704313562679f && tensor_dense_input[0][4] <= 0.5996295686437318f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.09962956864373192f && tensor_dense_input[0][5] <= 0.099629568643732f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.22535581173922242f && tensor_dense_input[0][6] <= 0.42461494902668634f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.47960917669835695f && tensor_dense_input[0][7] <= -0.28035003941089304f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
