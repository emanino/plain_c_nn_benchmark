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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.3480817845690055f && tensor_dense_input[0][0] <= -0.31040420847853745f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.8924746182760303f && tensor_dense_input[0][1] <= -0.8547970421855621f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.07879111844890803f && tensor_dense_input[0][2] <= 0.1164686945393761f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.018838788045234f && tensor_dense_input[0][3] <= -0.9811612119547659f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4811612119547661f && tensor_dense_input[0][4] <= 0.5188387880452342f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.018838788045234107f && tensor_dense_input[0][5] <= 0.018838788045233968f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.006809846418573448f && tensor_dense_input[0][6] <= 0.030867729671894627f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.4810164955752779f && tensor_dense_input[0][7] <= 0.518694071665746f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
