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

	__ESBMC_assume(tensor_input[0][0] >= 0.04625587729278151f && tensor_input[0][0] <= 0.0790123627072185f);
	__ESBMC_assume(tensor_input[0][1] >= 0.1841359372927815f && tensor_input[0][1] <= 0.21689242270721848f);
	__ESBMC_assume(tensor_input[0][2] >= -0.11443468270721849f && tensor_input[0][2] <= -0.0816781972927815f);
	__ESBMC_assume(tensor_input[0][3] >= -0.4298197827072185f && tensor_input[0][3] <= -0.3970632972927815f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
