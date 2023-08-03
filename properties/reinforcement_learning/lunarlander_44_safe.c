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

	__ESBMC_assume(tensor_input[0][0] >= -0.6602000188272397f && tensor_input[0][0] <= -0.6043861811727604f);
	__ESBMC_assume(tensor_input[0][1] >= 0.09131149117276038f && tensor_input[0][1] <= 0.1471253288272396f);
	__ESBMC_assume(tensor_input[0][2] >= -0.003269811827239611f && tensor_input[0][2] <= 0.052544025827239604f);
	__ESBMC_assume(tensor_input[0][3] >= -0.03567792932723961f && tensor_input[0][3] <= 0.02013590832723961f);
	__ESBMC_assume(tensor_input[0][4] >= 0.01705553617276039f && tensor_input[0][4] <= 0.07286937382723961f);
	__ESBMC_assume(tensor_input[0][5] >= -0.0689687818272396f && tensor_input[0][5] <= -0.013154944172760388f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9720930811727604f && tensor_input[0][6] <= 1.0279069188272396f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9720930811727604f && tensor_input[0][7] <= 1.0279069188272396f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
