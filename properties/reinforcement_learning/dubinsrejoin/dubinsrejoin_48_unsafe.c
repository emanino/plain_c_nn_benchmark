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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.535109280980681f && tensor_dense_input[0][0] <= -0.46153229089938863f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.3518936584772636f && tensor_dense_input[0][1] <= -0.27831666839597125f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.05970100016781167f && tensor_dense_input[0][2] <= 0.013875989913480668f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.5067709212841566f && tensor_dense_input[0][3] <= -0.43319393120286426f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.46321150495935376f && tensor_dense_input[0][4] <= 0.5367884950406461f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03678849504064617f && tensor_dense_input[0][5] <= 0.03678849504064617f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.14036499138770836f && tensor_dense_input[0][6] <= -0.06678800130641603f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.4523657847162286f && tensor_dense_input[0][7] <= 0.5259427747975209f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
