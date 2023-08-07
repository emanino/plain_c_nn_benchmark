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

	__ESBMC_assume(tensor_input[0][0] >= -0.7037102311597383f && tensor_input[0][0] <= -0.6658032888402616f);
	__ESBMC_assume(tensor_input[0][1] >= 0.05599281884026164f && tensor_input[0][1] <= 0.09389976115973836f);
	__ESBMC_assume(tensor_input[0][2] >= 0.007054095840261634f && tensor_input[0][2] <= 0.04496103815973836f);
	__ESBMC_assume(tensor_input[0][3] >= -0.050223345159738364f && tensor_input[0][3] <= -0.012316402840261639f);
	__ESBMC_assume(tensor_input[0][4] >= 0.06677890884026164f && tensor_input[0][4] <= 0.10468585115973836f);
	__ESBMC_assume(tensor_input[0][5] >= -0.07719269115973837f && tensor_input[0][5] <= -0.03928574884026163f);
	__ESBMC_assume(tensor_input[0][6] >= -0.018953471159738364f && tensor_input[0][6] <= 0.018953471159738364f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9810465288402617f && tensor_input[0][7] <= 1.0189534711597383f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
