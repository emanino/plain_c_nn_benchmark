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

	__ESBMC_assume(tensor_input[0][0] >= 0.4713732568947219f && tensor_input[0][0] <= 0.4771885431052781f);
	__ESBMC_assume(tensor_input[0][1] >= -0.6885270431052781f && tensor_input[0][1] <= -0.6827117568947219f);
	__ESBMC_assume(tensor_input[0][2] >= 0.01491313389472192f && tensor_input[0][2] <= 0.02072842010527808f);
	__ESBMC_assume(tensor_input[0][3] >= 0.8807768568947218f && tensor_input[0][3] <= 0.8865921431052781f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
