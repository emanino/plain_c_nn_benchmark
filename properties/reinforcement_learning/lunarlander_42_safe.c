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

	__ESBMC_assume(tensor_input[0][0] >= -0.9360955824029287f && tensor_input[0][0] <= -0.8709910175970714f);
	__ESBMC_assume(tensor_input[0][1] >= 0.031764667597071375f && tensor_input[0][1] <= 0.09686923240292862f);
	__ESBMC_assume(tensor_input[0][2] >= 0.029440403597071375f && tensor_input[0][2] <= 0.09454496840292861f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05046328840292862f && tensor_input[0][3] <= 0.014641276402928623f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4414273024029286f && tensor_input[0][4] <= -0.37632273759707136f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03255227446791762f && tensor_input[0][5] <= 0.032552290337939625f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9674477175970714f && tensor_input[0][6] <= 1.0325522824029285f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9674477175970714f && tensor_input[0][7] <= 1.0325522824029285f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
