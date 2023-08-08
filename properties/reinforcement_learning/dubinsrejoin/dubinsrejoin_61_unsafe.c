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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.668048028671052f && tensor_dense_input[0][0] <= -0.5355630288585074f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5439620122799245f && tensor_dense_input[0][1] <= -0.4114770124673799f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.33753680752610826f && tensor_dense_input[0][2] <= -0.2050518077135637f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.16877894670089064f && tensor_dense_input[0][3] <= -0.03629394688834611f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4337575000937277f && tensor_dense_input[0][4] <= 0.5662424999062723f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06624249990627219f && tensor_dense_input[0][5] <= 0.06624249990627233f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5564161763399063f && tensor_dense_input[0][6] <= -0.4239311765273618f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.032397081051551424f && tensor_dense_input[0][7] <= 0.16488208086409595f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
