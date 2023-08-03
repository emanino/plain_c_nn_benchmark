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

	__ESBMC_assume(tensor_input[0][0] >= -0.7576785285575234f && tensor_input[0][0] <= -0.7012026714424766f);
	__ESBMC_assume(tensor_input[0][1] >= 0.01996681344247661f && tensor_input[0][1] <= 0.07644267055752339f);
	__ESBMC_assume(tensor_input[0][2] >= 0.0019979014424766108f && tensor_input[0][2] <= 0.05847375855752339f);
	__ESBMC_assume(tensor_input[0][3] >= -0.07543716655752339f && tensor_input[0][3] <= -0.018961309442476607f);
	__ESBMC_assume(tensor_input[0][4] >= -0.08431406855752338f && tensor_input[0][4] <= -0.027838211442476606f);
	__ESBMC_assume(tensor_input[0][5] >= -0.10187698855752339f && tensor_input[0][5] <= -0.045401131442476615f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9717620714424766f && tensor_input[0][6] <= 1.0282379285575234f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9717620714424766f && tensor_input[0][7] <= 1.0282379285575234f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
