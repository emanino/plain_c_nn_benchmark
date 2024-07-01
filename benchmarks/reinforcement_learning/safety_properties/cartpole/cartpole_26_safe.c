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

	__VERIFIER_assume(tensor_input[0][0] >= 0.04625587729278151f && tensor_input[0][0] <= 0.0790123627072185f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.1841359372927815f && tensor_input[0][1] <= 0.21689242270721848f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.11443468270721849f && tensor_input[0][2] <= -0.0816781972927815f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.4298197827072185f && tensor_input[0][3] <= -0.3970632972927815f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
