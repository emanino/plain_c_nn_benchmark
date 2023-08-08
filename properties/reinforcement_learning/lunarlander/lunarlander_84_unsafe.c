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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7526759191003642f && tensor_input[0][0] <= -0.6907758808996358f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.0017454031003641957f && tensor_input[0][1] <= 0.060154635100364194f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.002081920899635808f && tensor_input[0][2] <= 0.0639819591003642f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0872794261003642f && tensor_input[0][3] <= -0.025379387899635803f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.050561530899635804f && tensor_input[0][4] <= 0.1124615691003642f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.08083321310036419f && tensor_input[0][5] <= -0.018933174899635804f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9690499808996358f && tensor_input[0][6] <= 1.0309500191003642f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9690499808996358f && tensor_input[0][7] <= 1.0309500191003642f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
