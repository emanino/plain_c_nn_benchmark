#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.5920239513830312f && tensor_input[0][0] <= -0.5270076486169688f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.08914727861696876f && tensor_input[0][1] <= 0.1541635813830312f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05319658438303123f && tensor_input[0][2] <= 0.011819718383031232f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.02469353861696877f && tensor_input[0][3] <= 0.08970984138303123f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.06684340861696877f && tensor_input[0][4] <= 0.13185971138303124f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.01763430588303123f && tensor_input[0][5] <= 0.04738199688303123f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.03250815138303123f && tensor_input[0][6] <= 0.03250815138303123f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9674918486169688f && tensor_input[0][7] <= 1.0325081513830312f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
