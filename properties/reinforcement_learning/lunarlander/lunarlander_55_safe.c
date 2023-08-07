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

	__ESBMC_assume(tensor_input[0][0] >= -0.9429454064725963f && tensor_input[0][0] <= -0.8743217935274038f);
	__ESBMC_assume(tensor_input[0][1] >= 0.03331434352740375f && tensor_input[0][1] <= 0.10193795647259624f);
	__ESBMC_assume(tensor_input[0][2] >= 0.03182877352740376f && tensor_input[0][2] <= 0.10045238647259624f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05342122547259624f && tensor_input[0][3] <= 0.015202387472596248f);
	__ESBMC_assume(tensor_input[0][4] >= -0.44318710647259624f && tensor_input[0][4] <= -0.37456349352740376f);
	__ESBMC_assume(tensor_input[0][5] >= -0.034311807062143214f && tensor_input[0][5] <= 0.03431180588304928f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9656881935274038f && tensor_input[0][6] <= 1.0343118064725962f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9656881935274038f && tensor_input[0][7] <= 1.0343118064725962f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
