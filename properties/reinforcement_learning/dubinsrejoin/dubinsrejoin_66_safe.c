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

	__VERIFIER_assume(tensor_dense_input[0][0] >= 0.2708941126012189f && tensor_dense_input[0][0] <= 0.4033842300520275f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.544638068294556f && tensor_dense_input[0][1] <= -0.4121479508437473f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.7506198611994028f && tensor_dense_input[0][2] <= 0.8831099786502115f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.6855749553465715f && tensor_dense_input[0][3] <= -0.5530848378957629f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4337549412745957f && tensor_dense_input[0][4] <= 0.5662450587254043f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0662450587254043f && tensor_dense_input[0][5] <= 0.06624505872540433f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.1840530085071523f && tensor_dense_input[0][6] <= -0.05156289105634368f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.41967806993613727f && tensor_dense_input[0][7] <= 0.552168187386946f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
