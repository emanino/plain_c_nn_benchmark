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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.39888232907263094f && tensor_dense_input[0][0] <= -0.20375230730662514f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.30144360275711723f && tensor_dense_input[0][1] <= 0.49657362452312304f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.09756501088300289f && tensor_dense_input[0][2] <= 0.09756501088300289f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.09756501088300289f && tensor_dense_input[0][3] <= 0.09756501088300289f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= -1.0074877334849333f && tensor_dense_input[0][4] <= -0.8123577117189275f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.09756501088300289f && tensor_dense_input[0][5] <= 0.09756501088300289f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5036253781401191f && tensor_dense_input[0][6] <= -0.3084953563741133f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.12173490493646914f && tensor_dense_input[0][7] <= 0.3168649267024749f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
