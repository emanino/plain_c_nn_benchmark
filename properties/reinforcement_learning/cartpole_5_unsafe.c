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

	__ESBMC_assume(tensor_input[0][0] >= 0.028859288384907273f && tensor_input[0][0] <= 0.08825992761509273f);
	__ESBMC_assume(tensor_input[0][1] >= 0.7523050803849073f && tensor_input[0][1] <= 0.8117057196150926f);
	__ESBMC_assume(tensor_input[0][2] >= -0.11805045961509272f && tensor_input[0][2] <= -0.058649820384907264f);
	__ESBMC_assume(tensor_input[0][3] >= -1.2374512196150926f && tensor_input[0][3] <= -1.1780505803849073f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
