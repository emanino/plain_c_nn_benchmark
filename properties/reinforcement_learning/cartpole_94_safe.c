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

	__ESBMC_assume(tensor_input[0][0] >= -0.2541871341497828f && tensor_input[0][0] <= -0.2454579858502172f);
	__ESBMC_assume(tensor_input[0][1] >= -0.4471501941497828f && tensor_input[0][1] <= -0.4384210458502172f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0582838371497828f && tensor_input[0][2] <= -0.0495546888502172f);
	__ESBMC_assume(tensor_input[0][3] >= 0.2371771858502172f && tensor_input[0][3] <= 0.2459063341497828f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
