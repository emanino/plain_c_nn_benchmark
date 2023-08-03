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

	__ESBMC_assume(tensor_input[0][0] >= -0.04220074418040166f && tensor_input[0][0] <= -0.03410460781959835f);
	__ESBMC_assume(tensor_input[0][1] >= -0.04821575118040165f && tensor_input[0][1] <= -0.040119614819598345f);
	__ESBMC_assume(tensor_input[0][2] >= -0.04871203418040165f && tensor_input[0][2] <= -0.040615897819598346f);
	__ESBMC_assume(tensor_input[0][3] >= -0.13282032818040165f && tensor_input[0][3] <= -0.12472419181959835f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
