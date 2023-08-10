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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.6291558399941772f && tensor_dense_input[0][0] <= -0.42229329549230044f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5831080576625275f && tensor_dense_input[0][1] <= -0.3762455131606507f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.15375089574486564f && tensor_dense_input[0][2] <= 0.053111648757011104f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.7379955619464837f && tensor_dense_input[0][3] <= -0.531133017444607f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3965687277490616f && tensor_dense_input[0][4] <= 0.6034312722509384f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10343127225093837f && tensor_dense_input[0][5] <= 0.10343127225093837f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.20699723093691963f && tensor_dense_input[0][6] <= -0.00013468643504288558f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.385725238695664f && tensor_dense_input[0][7] <= 0.5925877831975408f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
