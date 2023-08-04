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

	__ESBMC_assume(tensor_input[0][0] >= 0.43839946351139586f && tensor_input[0][0] <= 0.4475139364886041f);
	__ESBMC_assume(tensor_input[0][1] >= -0.3013308164886041f && tensor_input[0][1] <= -0.29221634351139586f);
	__ESBMC_assume(tensor_input[0][2] >= 0.0544146635113959f && tensor_input[0][2] <= 0.0635291364886041f);
	__ESBMC_assume(tensor_input[0][3] >= 0.3250685835113959f && tensor_input[0][3] <= 0.33418305648860414f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}