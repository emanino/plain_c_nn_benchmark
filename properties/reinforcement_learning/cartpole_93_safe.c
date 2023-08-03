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

	__ESBMC_assume(tensor_input[0][0] >= 0.4877579574485677f && tensor_input[0][0] <= 0.4964371625514323f);
	__ESBMC_assume(tensor_input[0][1] >= -0.10433959255143228f && tensor_input[0][1] <= -0.09566038744856771f);
	__ESBMC_assume(tensor_input[0][2] >= 0.001514055948567709f && tensor_input[0][2] <= 0.010193261051432291f);
	__ESBMC_assume(tensor_input[0][3] >= -0.004339613454721291f && tensor_input[0][3] <= 0.004339591648143291f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
