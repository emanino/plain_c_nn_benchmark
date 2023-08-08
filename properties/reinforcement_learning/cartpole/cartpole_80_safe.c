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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2548340255436028f && tensor_input[0][0] <= -0.24483311445639722f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05812608254360279f && tensor_input[0][1] <= -0.04812517145639721f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05867811554360279f && tensor_input[0][2] <= -0.04867720445639721f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3367599355436028f && tensor_input[0][3] <= -0.3267590244563972f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
