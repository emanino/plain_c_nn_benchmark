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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.40095390566640376f && tensor_dense_input[0][0] <= -0.2016807307128523f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.2993720261633444f && tensor_dense_input[0][1] <= 0.49864520111689586f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.09963658747677574f && tensor_dense_input[0][2] <= 0.09963658747677574f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.09963658747677574f && tensor_dense_input[0][3] <= 0.09963658747677574f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= -1.0095593100787061f && tensor_dense_input[0][4] <= -0.8102861351251546f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.09963658747677574f && tensor_dense_input[0][5] <= 0.09963658747677574f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.505696954733892f && tensor_dense_input[0][6] <= -0.30642377978034047f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.11966332834269629f && tensor_dense_input[0][7] <= 0.3189365032962478f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
