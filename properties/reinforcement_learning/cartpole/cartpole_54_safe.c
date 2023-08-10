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

	__VERIFIER_assume(tensor_input[0][0] >= -0.24461735253875527f && tensor_input[0][0] <= -0.24152554746124472f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.2483006225387553f && tensor_input[0][1] <= -0.24520881746124473f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.07401872253875526f && tensor_input[0][2] <= -0.07092691746124473f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07330642253875526f && tensor_input[0][3] <= -0.07021461746124473f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
