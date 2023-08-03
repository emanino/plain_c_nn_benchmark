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

	__ESBMC_assume(tensor_input[0][0] >= -0.09419196287078163f && tensor_input[0][0] <= 0.10773051420134805f);
	__ESBMC_assume(tensor_input[0][1] >= 0.09903876146393517f && tensor_input[0][1] <= 0.3009612385360648f);
	__ESBMC_assume(tensor_input[0][2] >= 0.5846699889572212f && tensor_input[0][2] <= 0.786592466029351f);
	__ESBMC_assume(tensor_input[0][3] >= 0.04918704192556439f && tensor_input[0][3] <= 0.25110951899769407f);
	__ESBMC_assume(tensor_input[0][4] >= -0.10879827329797051f && tensor_input[0][4] <= 0.09312420377415917f);
	__ESBMC_assume(tensor_input[0][5] >= -0.2562668029395988f && tensor_input[0][5] <= -0.054344325867469095f);
	__ESBMC_assume(tensor_input[0][6] >= -0.10096123853606484f && tensor_input[0][6] <= 0.10096123853606484f);
	__ESBMC_assume(tensor_input[0][7] >= -0.10096123853606484f && tensor_input[0][7] <= 0.10096123853606484f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
