#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.9362396989956255f && tensor_input[0][0] <= -0.8358851010043745f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0027758810043745294f && tensor_input[0][1] <= 0.10313047899562547f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.6561477510043745f && tensor_input[0][2] <= 0.7565023489956255f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.2542496289956255f && tensor_input[0][3] <= -0.15389503100437452f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.45905252899562543f && tensor_input[0][4] <= -0.3586979310043745f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.05017729965280637f && tensor_input[0][5] <= 0.05017729833844457f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9498227010043745f && tensor_input[0][6] <= 1.0501772989956255f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9498227010043745f && tensor_input[0][7] <= 1.0501772989956255f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
