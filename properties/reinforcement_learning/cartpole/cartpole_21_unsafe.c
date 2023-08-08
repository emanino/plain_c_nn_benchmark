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

	__VERIFIER_assume(tensor_input[0][0] >= -0.04317455154793379f && tensor_input[0][0] <= -0.00367114845206621f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6057662015479338f && tensor_input[0][1] <= -0.5662627984520662f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.015553962452066212f && tensor_input[0][2] <= 0.05505736554793379f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.8729270984520662f && tensor_input[0][3] <= 0.9124305015479338f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
