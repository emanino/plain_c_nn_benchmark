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

	__ESBMC_assume(tensor_input[0][0] >= -0.8808905271453735f && tensor_input[0][0] <= -0.8069171528546264f);
	__ESBMC_assume(tensor_input[0][1] >= 0.04282256285462638f && tensor_input[0][1] <= 0.11679593714537362f);
	__ESBMC_assume(tensor_input[0][2] >= -0.05242099214537362f && tensor_input[0][2] <= 0.021552382145373618f);
	__ESBMC_assume(tensor_input[0][3] >= -0.01521057514537362f && tensor_input[0][3] <= 0.05876279914537362f);
	__ESBMC_assume(tensor_input[0][4] >= 0.0017023628546263825f && tensor_input[0][4] <= 0.07567573714537362f);
	__ESBMC_assume(tensor_input[0][5] >= -0.14372301214537364f && tensor_input[0][5] <= -0.06974963785462639f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9630133128546263f && tensor_input[0][6] <= 1.0369866871453737f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9630133128546263f && tensor_input[0][7] <= 1.0369866871453737f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
