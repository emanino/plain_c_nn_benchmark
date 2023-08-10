#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.2639445795143858f && tensor_input[0][0] <= -0.25345586048561414f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.25286843951438587f && tensor_input[0][1] <= -0.24237972048561415f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05385553951438585f && tensor_input[0][2] <= -0.043366820485614146f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.05771314351438585f && tensor_input[0][3] <= -0.04722442448561415f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
