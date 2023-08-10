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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.17306397587844408f && tensor_dense_input[0][0] <= 0.025798098681150863f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.09526021465043527f && tensor_dense_input[0][1] <= 0.2941222892100302f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.6646286595652802f && tensor_dense_input[0][2] <= -0.4657665850056852f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= 0.0038044234075620825f && tensor_dense_input[0][3] <= 0.20266649796715702f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.40056896272020237f && tensor_dense_input[0][4] <= 0.5994310372797973f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.09943103727979742f && tensor_dense_input[0][5] <= 0.0994310372797975f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.22555434310315692f && tensor_dense_input[0][6] <= 0.42441641766275184f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.47941064533442246f && tensor_dense_input[0][7] <= -0.28054857077482753f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
