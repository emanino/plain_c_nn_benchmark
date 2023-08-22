#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.8896045647561848f && tensor_input[0][0] <= -0.8368984352438151f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.03699385524381514f && tensor_input[0][1] <= 0.08969998475618486f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.012913095243815145f && tensor_input[0][2] <= 0.06561922475618485f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.054524339756184856f && tensor_input[0][3] <= -0.0018182102438151423f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.13169005475618487f && tensor_input[0][4] <= -0.07898392524381515f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.18625374475618484f && tensor_input[0][5] <= -0.13354761524381514f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9736469352438152f && tensor_input[0][6] <= 1.026353064756185f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9736469352438152f && tensor_input[0][7] <= 1.026353064756185f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
