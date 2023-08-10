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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.45024627167828707f && tensor_dense_input[0][0] <= -0.3135156832216515f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.9944672954863175f && tensor_dense_input[0][1] <= -0.8577367070296821f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.5202251144609679f && tensor_dense_input[0][2] <= -0.38349452600433237f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0683652942283177f && tensor_dense_input[0][3] <= -0.9316347057716823f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4316347057716822f && tensor_dense_input[0][4] <= 0.5683652942283177f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06836529422831775f && tensor_dense_input[0][5] <= 0.06836529422831777f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.3953748952930619f && tensor_dense_input[0][6] <= 0.5321054837496975f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.11857062158957661f && tensor_dense_input[0][7] <= 0.25530121004621215f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
