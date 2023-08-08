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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.4054362064152494f && tensor_dense_input[0][0] <= -0.19719842996400666f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.29488972541449876f && tensor_dense_input[0][1] <= 0.5031275018657415f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.10411888822562138f && tensor_dense_input[0][2] <= 0.10411888822562138f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.10411888822562138f && tensor_dense_input[0][3] <= 0.10411888822562138f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= -1.0140416108275516f && tensor_dense_input[0][4] <= -0.805803834376309f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10411888822562138f && tensor_dense_input[0][5] <= 0.10411888822562138f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5101792554827376f && tensor_dense_input[0][6] <= -0.3019414790314948f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.11518102759385065f && tensor_dense_input[0][7] <= 0.3234188040450934f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
