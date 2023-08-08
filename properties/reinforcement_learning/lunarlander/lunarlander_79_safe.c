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

	__VERIFIER_assume(tensor_input[0][0] >= -0.5818635124521179f && tensor_input[0][0] <= -0.5612386875478821f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.1471872775478821f && tensor_input[0][1] <= 0.1678121024521179f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.022152153452117886f && tensor_input[0][2] <= -0.001527328547882116f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.020142949547882115f && tensor_input[0][3] <= 0.040767774452117884f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.03922252354788212f && tensor_input[0][4] <= 0.059847348452117886f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.012503359452117885f && tensor_input[0][5] <= 0.008121465452117884f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.010312412452117885f && tensor_input[0][6] <= 0.010312412452117885f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.010312412452117885f && tensor_input[0][7] <= 0.010312412452117885f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
