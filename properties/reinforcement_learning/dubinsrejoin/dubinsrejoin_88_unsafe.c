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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.7789644784015127f && tensor_dense_input[0][0] <= -0.714371816131086f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.7355744698240518f && tensor_dense_input[0][1] <= -0.6709818075536251f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0322963311352134f && tensor_dense_input[0][2] <= -0.9677036688647866f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.31655958640339044f && tensor_dense_input[0][3] <= -0.25196692413296373f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.46770366886478665f && tensor_dense_input[0][4] <= 0.5322963311352134f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.032296331135213414f && tensor_dense_input[0][5] <= 0.032296331135213345f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.25876773633065914f && tensor_dense_input[0][6] <= -0.19417507406023238f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.47806611771658347f && tensor_dense_input[0][7] <= -0.41347345544615666f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
