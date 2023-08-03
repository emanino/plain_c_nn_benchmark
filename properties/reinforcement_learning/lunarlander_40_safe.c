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

	__ESBMC_assume(tensor_input[0][0] >= -0.9183609074017559f && tensor_input[0][0] <= -0.8274702925982441f);
	__ESBMC_assume(tensor_input[0][1] >= -0.0010382154017558945f && tensor_input[0][1] <= 0.0898523994017559f);
	__ESBMC_assume(tensor_input[0][2] >= 0.4230535525982441f && tensor_input[0][2] <= 0.513944167401756f);
	__ESBMC_assume(tensor_input[0][3] >= -0.1808045974017559f && tensor_input[0][3] <= -0.0899139825982441f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4543200074017559f && tensor_input[0][4] <= -0.3634293925982441f);
	__ESBMC_assume(tensor_input[0][5] >= -0.0454453043740889f && tensor_input[0][5] <= 0.045445310429422896f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9545546925982441f && tensor_input[0][6] <= 1.045445307401756f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9545546925982441f && tensor_input[0][7] <= 1.045445307401756f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
