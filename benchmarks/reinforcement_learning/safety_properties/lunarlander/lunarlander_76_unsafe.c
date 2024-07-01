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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8459830427398526f && tensor_input[0][0] <= -0.7893185572601474f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0867694372601474f && tensor_input[0][1] <= 0.14343392273985262f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.009497677739852602f && tensor_input[0][2] <= 0.0471668077398526f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.036636986739852606f && tensor_input[0][3] <= 0.020027498739852604f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.0383110372398526f && tensor_input[0][4] <= 0.018353448239852604f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.021131722260147395f && tensor_input[0][5] <= 0.0777962077398526f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.028332242739852603f && tensor_input[0][6] <= 0.028332242739852603f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9716677572601474f && tensor_input[0][7] <= 1.0283322427398527f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
