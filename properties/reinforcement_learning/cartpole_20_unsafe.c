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

	__ESBMC_assume(tensor_input[0][0] >= 0.0379002045345187f && tensor_input[0][0] <= 0.0715301014654813f);
	__ESBMC_assume(tensor_input[0][1] >= 0.3762166815345187f && tensor_input[0][1] <= 0.40984657846548134f);
	__ESBMC_assume(tensor_input[0][2] >= -0.1006050084654813f && tensor_input[0][2] <= -0.0669751115345187f);
	__ESBMC_assume(tensor_input[0][3] >= -0.6656175484654813f && tensor_input[0][3] <= -0.6319876515345187f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
