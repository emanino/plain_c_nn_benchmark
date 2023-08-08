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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.2760471643292468f && tensor_dense_input[0][0] <= -0.1382724236856213f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.7058921170252642f && tensor_dense_input[0][1] <= -0.5681173763816386f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.4583190489483674f && tensor_dense_input[0][2] <= -0.3205443083047418f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0688873703218127f && tensor_dense_input[0][3] <= -0.9311126296781872f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4311126296781872f && tensor_dense_input[0][4] <= 0.5688873703218128f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06888737032181273f && tensor_dense_input[0][5] <= 0.06888737032181282f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.4254640479531987f && tensor_dense_input[0][6] <= 0.5632387885968243f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.006057110792440576f && tensor_dense_input[0][7] <= 0.14383185143606614f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
