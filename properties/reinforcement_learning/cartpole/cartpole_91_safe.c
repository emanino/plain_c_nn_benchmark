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

	__ESBMC_assume(tensor_input[0][0] >= -0.2550689588985097f && tensor_input[0][0] <= -0.2502539211014903f);
	__ESBMC_assume(tensor_input[0][1] >= 0.13898561110149027f && tensor_input[0][1] <= 0.14380064889850974f);
	__ESBMC_assume(tensor_input[0][2] >= -0.04386312889850973f && tensor_input[0][2] <= -0.03904809110149026f);
	__ESBMC_assume(tensor_input[0][3] >= -0.6135099788985098f && tensor_input[0][3] <= -0.6086949411014903f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
