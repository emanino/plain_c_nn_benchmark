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

	__ESBMC_assume(tensor_input[0][0] >= -0.8164469626575331f && tensor_input[0][0] <= -0.7561384373424668f);
	__ESBMC_assume(tensor_input[0][1] >= 0.015526483342466799f && tensor_input[0][1] <= 0.0758350086575332f);
	__ESBMC_assume(tensor_input[0][2] >= -0.005551676657533203f && tensor_input[0][2] <= 0.054756848657533205f);
	__ESBMC_assume(tensor_input[0][3] >= -0.0768727366575332f && tensor_input[0][3] <= -0.0165642113424668f);
	__ESBMC_assume(tensor_input[0][4] >= -0.14881454265753322f && tensor_input[0][4] <= -0.0885060173424668f);
	__ESBMC_assume(tensor_input[0][5] >= -0.10398062265753319f && tensor_input[0][5] <= -0.04367209734246679f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9698457373424668f && tensor_input[0][6] <= 1.0301542626575333f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9698457373424668f && tensor_input[0][7] <= 1.0301542626575333f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}