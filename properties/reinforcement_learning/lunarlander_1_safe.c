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

	__ESBMC_assume(tensor_input[0][0] >= -0.9704786087092481f && tensor_input[0][0] <= -0.767453791290752f);
	__ESBMC_assume(tensor_input[0][1] >= -0.059673084709248106f && tensor_input[0][1] <= 0.14335173270924811f);
	__ESBMC_assume(tensor_input[0][2] >= 1.4527356912907519f && tensor_input[0][2] <= 1.655760508709248f);
	__ESBMC_assume(tensor_input[0][3] >= -0.5505677487092482f && tensor_input[0][3] <= -0.3475429312907519f);
	__ESBMC_assume(tensor_input[0][4] >= -0.5103874087092481f && tensor_input[0][4] <= -0.3073625912907519f);
	__ESBMC_assume(tensor_input[0][5] >= -0.1015124160361259f && tensor_input[0][5] <= 0.1015124013823703f);
	__ESBMC_assume(tensor_input[0][6] >= 0.898487591290752f && tensor_input[0][6] <= 1.101512408709248f);
	__ESBMC_assume(tensor_input[0][7] >= 0.898487591290752f && tensor_input[0][7] <= 1.101512408709248f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}