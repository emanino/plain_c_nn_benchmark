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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.7662673550552432f && tensor_dense_input[0][0] <= -0.6984226525504753f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.033922351252384f && tensor_dense_input[0][1] <= -0.966077648747616f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9485191793663543f && tensor_dense_input[0][2] <= -0.8806744768615864f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.033922351252384f && tensor_dense_input[0][3] <= -0.966077648747616f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.466077648747616f && tensor_dense_input[0][4] <= 0.533922351252384f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03392235125238403f && tensor_dense_input[0][5] <= 0.033922351252383985f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.46042583757133254f && tensor_dense_input[0][6] <= 0.5282705400761005f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.04104342898574245f && tensor_dense_input[0][7] <= 0.10888813149051046f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
