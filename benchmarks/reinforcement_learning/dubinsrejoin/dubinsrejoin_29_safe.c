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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.05271463780914543f && tensor_dense_input[0][0] <= 0.15364220009444127f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5858181162461294f && tensor_dense_input[0][1] <= -0.3794612783425428f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.5524240062570915f && tensor_dense_input[0][2] <= -0.3460671683535048f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.6028635580225902f && tensor_dense_input[0][3] <= -0.39650672011900345f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3968215810482066f && tensor_dense_input[0][4] <= 0.6031784189517932f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10317841895179337f && tensor_dense_input[0][5] <= 0.10317841895179332f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.16143805086932322f && tensor_dense_input[0][6] <= 0.36779488877290994f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5274167056485624f && tensor_dense_input[0][7] <= -0.32105986774497564f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
