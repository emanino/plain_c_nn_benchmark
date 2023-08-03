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

	__ESBMC_assume(tensor_input[0][0] >= 0.028563969533472067f && tensor_input[0][0] <= 0.06525167846652793f);
	__ESBMC_assume(tensor_input[0][1] >= 0.37436870553347207f && tensor_input[0][1] <= 0.4110564144665279f);
	__ESBMC_assume(tensor_input[0][2] >= -0.09035249446652793f && tensor_input[0][2] <= -0.053664785533472065f);
	__ESBMC_assume(tensor_input[0][3] >= -0.659551354466528f && tensor_input[0][3] <= -0.6228636455334721f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
