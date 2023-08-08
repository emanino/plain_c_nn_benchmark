#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8150645962334746f && tensor_input[0][0] <= -0.7572296037665254f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.015978973766525392f && tensor_input[0][1] <= 0.07381396623347461f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.01573264076652539f && tensor_input[0][2] <= 0.07356763323347461f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0930864712334746f && tensor_input[0][3] <= -0.035251478766525395f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.05856512623347461f && tensor_input[0][4] <= -0.0007301337665253926f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.1326643862334746f && tensor_input[0][5] <= -0.07482939376652539f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9710825037665254f && tensor_input[0][6] <= 1.0289174962334746f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9710825037665254f && tensor_input[0][7] <= 1.0289174962334746f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
