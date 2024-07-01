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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5307898424130997f && tensor_dense_input[0][0] <= -0.46585172946696995f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.3475742199096823f && tensor_dense_input[0][1] <= -0.28263610696355257f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.055381561600230333f && tensor_dense_input[0][2] <= 0.00955655134589933f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.5024514827165752f && tensor_dense_input[0][3] <= -0.43751336977044564f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.46753094352693514f && tensor_dense_input[0][4] <= 0.5324690564730648f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03246905647306483f && tensor_dense_input[0][5] <= 0.03246905647306483f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.13604555282012704f && tensor_dense_input[0][6] <= -0.07110743987399737f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.45668522328381f && tensor_dense_input[0][7] <= 0.5216233362299396f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
