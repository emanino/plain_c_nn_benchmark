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

	__ESBMC_assume(tensor_input[0][0] >= -0.9521035988278241f && tensor_input[0][0] <= -0.8813364611721759f);
	__ESBMC_assume(tensor_input[0][1] >= 0.03749935117217583f && tensor_input[0][1] <= 0.10826648882782418f);
	__ESBMC_assume(tensor_input[0][2] >= 0.03180637117217583f && tensor_input[0][2] <= 0.10257350882782418f);
	__ESBMC_assume(tensor_input[0][3] >= -0.054796171827824175f && tensor_input[0][3] <= 0.015970965827824174f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4442588288278242f && tensor_input[0][4] <= -0.37349169117217584f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03538356926330751f && tensor_input[0][5] <= 0.03538356839234084f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9646164311721759f && tensor_input[0][6] <= 1.0353835688278241f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9646164311721759f && tensor_input[0][7] <= 1.0353835688278241f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}