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

	__ESBMC_assume(tensor_input[0][0] >= -0.1002256940590116f && tensor_input[0][0] <= -0.04054062594098839f);
	__ESBMC_assume(tensor_input[0][1] >= -0.6193572340590116f && tensor_input[0][1] <= -0.5596721659409883f);
	__ESBMC_assume(tensor_input[0][2] >= 0.07871927594098838f && tensor_input[0][2] <= 0.1384043440590116f);
	__ESBMC_assume(tensor_input[0][3] >= 0.9445111959409884f && tensor_input[0][3] <= 1.0041962640590116f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
