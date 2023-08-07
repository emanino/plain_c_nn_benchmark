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

	__ESBMC_assume(tensor_input[0][0] >= -0.7563759372227854f && tensor_input[0][0] <= -0.7024353427772145f);
	__ESBMC_assume(tensor_input[0][1] >= 0.021209194777214523f && tensor_input[0][1] <= 0.07514978922278548f);
	__ESBMC_assume(tensor_input[0][2] >= 0.003318419777214525f && tensor_input[0][2] <= 0.057259014222785475f);
	__ESBMC_assume(tensor_input[0][3] >= -0.07475728222278546f && tensor_input[0][3] <= -0.020816687777214522f);
	__ESBMC_assume(tensor_input[0][4] >= -0.1291821232227855f && tensor_input[0][4] <= -0.07524152877721453f);
	__ESBMC_assume(tensor_input[0][5] >= -0.10070648722278547f && tensor_input[0][5] <= -0.04676589277721452f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9730297027772146f && tensor_input[0][6] <= 1.0269702972227854f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9730297027772146f && tensor_input[0][7] <= 1.0269702972227854f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
