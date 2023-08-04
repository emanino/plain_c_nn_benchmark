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

	__ESBMC_assume(tensor_input[0][0] >= -0.9286865558817767f && tensor_input[0][0] <= -0.8261272441182232f);
	__ESBMC_assume(tensor_input[0][1] >= -0.003952818881776739f && tensor_input[0][1] <= 0.09860649288177673f);
	__ESBMC_assume(tensor_input[0][2] >= 0.5119304441182233f && tensor_input[0][2] <= 0.6144897558817768f);
	__ESBMC_assume(tensor_input[0][3] >= -0.21400303588177674f && tensor_input[0][3] <= -0.11144372411822326f);
	__ESBMC_assume(tensor_input[0][4] >= -0.46015538588177674f && tensor_input[0][4] <= -0.35759607411822325f);
	__ESBMC_assume(tensor_input[0][5] >= -0.05127965781292754f && tensor_input[0][5] <= 0.051279653950625934f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9487203441182233f && tensor_input[0][6] <= 1.0512796558817767f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9487203441182233f && tensor_input[0][7] <= 1.0512796558817767f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}