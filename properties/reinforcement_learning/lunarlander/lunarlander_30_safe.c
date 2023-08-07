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

	__ESBMC_assume(tensor_input[0][0] >= -0.9283819324128401f && tensor_input[0][0] <= -0.83195206758716f);
	__ESBMC_assume(tensor_input[0][1] >= 0.0009058375871599592f && tensor_input[0][1] <= 0.09733570241284004f);
	__ESBMC_assume(tensor_input[0][2] >= 0.62438682758716f && tensor_input[0][2] <= 0.7208166924128401f);
	__ESBMC_assume(tensor_input[0][3] >= -0.24254389241284002f && tensor_input[0][3] <= -0.14611402758715997f);
	__ESBMC_assume(tensor_input[0][4] >= -0.45709013241284f && tensor_input[0][4] <= -0.36066026758715997f);
	__ESBMC_assume(tensor_input[0][5] >= -0.04821492713983904f && tensor_input[0][5] <= 0.04821493768584104f);
	__ESBMC_assume(tensor_input[0][6] >= 0.95178506758716f && tensor_input[0][6] <= 1.04821493241284f);
	__ESBMC_assume(tensor_input[0][7] >= 0.95178506758716f && tensor_input[0][7] <= 1.04821493241284f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
