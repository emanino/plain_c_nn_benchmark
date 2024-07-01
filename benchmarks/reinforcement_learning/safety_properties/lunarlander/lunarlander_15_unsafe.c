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

	__VERIFIER_assume(tensor_input[0][0] >= -0.058966294732262704f && tensor_input[0][0] <= 0.06981929918782911f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.1356072030399541f && tensor_input[0][1] <= 0.2643927969600459f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.4852362237308721f && tensor_input[0][2] <= 0.614021817650964f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0808465498751104f && tensor_input[0][3] <= 0.04793904404498141f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.07067394606800875f && tensor_input[0][4] <= 0.05811164785208306f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.18889181992070875f && tensor_input[0][5] <= -0.060106226000616936f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.0643927969600459f && tensor_input[0][6] <= 0.0643927969600459f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.0643927969600459f && tensor_input[0][7] <= 0.0643927969600459f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
