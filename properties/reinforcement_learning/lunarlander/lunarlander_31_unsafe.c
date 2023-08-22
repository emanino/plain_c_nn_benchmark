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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8705894453821494f && tensor_input[0][0] <= -0.8147222346178506f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04976069861785058f && tensor_input[0][1] <= 0.10562790938214943f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.000657229382149422f && tensor_input[0][2] <= 0.05520998138214943f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.06213029138214942f && tensor_input[0][3] <= -0.0062630806178505735f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.01382832461785058f && tensor_input[0][4] <= 0.06969553538214943f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03957769538214942f && tensor_input[0][5] <= 0.016289515382149424f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9720663946178506f && tensor_input[0][6] <= 1.0279336053821495f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9720663946178506f && tensor_input[0][7] <= 1.0279336053821495f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
