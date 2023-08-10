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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8332280818548683f && tensor_input[0][0] <= -0.7696047181451318f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.009278756854868241f && tensor_input[0][1] <= 0.054344606854868235f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06606891185486824f && tensor_input[0][2] <= -0.0024455481451317596f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.014520610145131757f && tensor_input[0][3] <= 0.07814397385486824f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.14566564185486824f && tensor_input[0][4] <= -0.08204227814513176f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.04005579285486824f && tensor_input[0][5] <= 0.02356757085486824f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9681883181451317f && tensor_input[0][6] <= 1.0318116818548682f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.03181168185486824f && tensor_input[0][7] <= 0.03181168185486824f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
