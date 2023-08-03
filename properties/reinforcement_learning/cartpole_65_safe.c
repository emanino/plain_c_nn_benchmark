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

	__ESBMC_assume(tensor_input[0][0] >= 0.42780327986502886f && tensor_input[0][0] <= 0.4309316801349712f);
	__ESBMC_assume(tensor_input[0][1] >= -0.8830843501349711f && tensor_input[0][1] <= -0.8799559498650288f);
	__ESBMC_assume(tensor_input[0][2] >= 0.08037730986502886f && tensor_input[0][2] <= 0.08350571013497113f);
	__ESBMC_assume(tensor_input[0][3] >= 1.194896199865029f && tensor_input[0][3] <= 1.1980246001349713f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
