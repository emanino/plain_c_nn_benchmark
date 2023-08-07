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

	__ESBMC_assume(tensor_input[0][0] >= -0.058966294732262704f && tensor_input[0][0] <= 0.06981929918782911f);
	__ESBMC_assume(tensor_input[0][1] >= 0.1356072030399541f && tensor_input[0][1] <= 0.2643927969600459f);
	__ESBMC_assume(tensor_input[0][2] >= 0.4852362237308721f && tensor_input[0][2] <= 0.614021817650964f);
	__ESBMC_assume(tensor_input[0][3] >= -0.0808465498751104f && tensor_input[0][3] <= 0.04793904404498141f);
	__ESBMC_assume(tensor_input[0][4] >= -0.07067394606800875f && tensor_input[0][4] <= 0.05811164785208306f);
	__ESBMC_assume(tensor_input[0][5] >= -0.18889181992070875f && tensor_input[0][5] <= -0.060106226000616936f);
	__ESBMC_assume(tensor_input[0][6] >= -0.0643927969600459f && tensor_input[0][6] <= 0.0643927969600459f);
	__ESBMC_assume(tensor_input[0][7] >= -0.0643927969600459f && tensor_input[0][7] <= 0.0643927969600459f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
