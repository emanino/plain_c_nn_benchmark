#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.1677959003221572f && tensor_dense_input[0][0] <= -0.14886701602852498f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.253305173969506f && tensor_dense_input[0][1] <= -0.23437628967587382f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.1875337036546001f && tensor_dense_input[0][2] <= 0.2064625879482323f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.605073382507066f && tensor_dense_input[0][3] <= -0.5861444982134338f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.49053555785318387f && tensor_dense_input[0][4] <= 0.5094644421468161f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.00946444214681608f && tensor_dense_input[0][5] <= 0.00946444214681615f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.11751096070207696f && tensor_dense_input[0][6] <= 0.1364398449957092f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.4741441258824955f && tensor_dense_input[0][7] <= 0.49307301017612776f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}