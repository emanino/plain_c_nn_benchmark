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

	__ESBMC_assume(tensor_input[0][0] >= 0.445772777469059f && tensor_input[0][0] <= 0.45556646253094096f);
	__ESBMC_assume(tensor_input[0][1] >= -0.302720872530941f && tensor_input[0][1] <= -0.29292718746905905f);
	__ESBMC_assume(tensor_input[0][2] >= 0.04438946346905903f && tensor_input[0][2] <= 0.05418314853094097f);
	__ESBMC_assume(tensor_input[0][3] >= 0.34776295746905905f && tensor_input[0][3] <= 0.357556642530941f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
