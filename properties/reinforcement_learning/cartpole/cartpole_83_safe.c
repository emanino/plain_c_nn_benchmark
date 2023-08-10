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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2601793836805143f && tensor_input[0][0] <= -0.2515105763194857f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05584592568051429f && tensor_input[0][1] <= -0.047177118319485706f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06577675668051429f && tensor_input[0][2] <= -0.05710794931948571f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3718953536805143f && tensor_input[0][3] <= -0.3632265463194857f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
