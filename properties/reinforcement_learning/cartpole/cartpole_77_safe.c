#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= 0.44694559359049696f && tensor_input[0][0] <= 0.45457566640950303f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.30059037640950304f && tensor_input[0][1] <= -0.29296030359049696f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.04346070759049698f && tensor_input[0][2] <= 0.051090780409503024f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.32565856359049694f && tensor_input[0][3] <= 0.333288636409503f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
