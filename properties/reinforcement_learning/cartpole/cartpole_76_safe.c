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

	__VERIFIER_assume(tensor_input[0][0] >= -0.259417339789158f && tensor_input[0][0] <= -0.24935986021084208f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.13554356021084207f && tensor_input[0][1] <= 0.14560103978915795f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.028480367789157947f && tensor_input[0][2] <= -0.01842288821084205f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.5977305897891579f && tensor_input[0][3] <= -0.587673110210842f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
