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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7715147988130449f && tensor_input[0][0] <= -0.6731382011869551f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.013584288813044895f && tensor_input[0][1] <= 0.08479230881304489f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05066255051304489f && tensor_input[0][2] <= 0.047714047113044895f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.0017361211869551044f && tensor_input[0][3] <= 0.1001127188130449f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.1298992288130449f && tensor_input[0][4] <= -0.031522631186955107f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.007181090813044896f && tensor_input[0][5] <= 0.09119550681304489f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9508117011869551f && tensor_input[0][6] <= 1.049188298813045f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9508117011869551f && tensor_input[0][7] <= 1.049188298813045f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
