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

	__ESBMC_assume(tensor_input[0][0] >= -0.2641275747886794f && tensor_input[0][0] <= -0.25463614521132066f);
	__ESBMC_assume(tensor_input[0][1] >= -0.44918643478867937f && tensor_input[0][1] <= -0.43969500521132066f);
	__ESBMC_assume(tensor_input[0][2] >= -0.028346132788679333f && tensor_input[0][2] <= -0.01885470321132067f);
	__ESBMC_assume(tensor_input[0][3] >= 0.27300718521132067f && tensor_input[0][3] <= 0.2824986147886794f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
