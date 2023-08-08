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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.48469974802502364f && tensor_dense_input[0][0] <= -0.44931980908019126f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.9474031393905123f && tensor_dense_input[0][1] <= -0.91202320044568f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.009650593868188832f && tensor_dense_input[0][2] <= 0.0450305328130212f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.8724515585528314f && tensor_dense_input[0][3] <= -0.837071619607999f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4823100305275838f && tensor_dense_input[0][4] <= 0.5176899694724162f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0176899694724162f && tensor_dense_input[0][5] <= 0.017689969472416165f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.329775113478252f && tensor_dense_input[0][6] <= -0.2943951745334196f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.37295419455778756f && tensor_dense_input[0][7] <= 0.40833413350261993f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
