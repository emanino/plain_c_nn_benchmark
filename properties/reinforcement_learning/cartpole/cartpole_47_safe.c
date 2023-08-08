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

	__VERIFIER_assume(tensor_input[0][0] >= -0.03787137814823809f && tensor_input[0][0] <= -0.028814441851761914f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6341041381482381f && tensor_input[0][1] <= -0.625047201851762f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05300003814823809f && tensor_input[0][2] <= -0.04394310185176191f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.7470074818517619f && tensor_input[0][3] <= 0.756064418148238f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
