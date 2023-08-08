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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7204123919761382f && tensor_input[0][0] <= -0.6348885080238619f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.014942398023861818f && tensor_input[0][1] <= 0.10046628197613819f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.08815499897613818f && tensor_input[0][2] <= -0.0026311150238618186f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.009522818023861818f && tensor_input[0][3] <= 0.09504670197613818f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05980455402386181f && tensor_input[0][4] <= 0.14532843797613818f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.034393723023861816f && tensor_input[0][5] <= 0.11991760697613818f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9572380580238619f && tensor_input[0][6] <= 1.0427619419761383f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9572380580238619f && tensor_input[0][7] <= 1.0427619419761383f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
