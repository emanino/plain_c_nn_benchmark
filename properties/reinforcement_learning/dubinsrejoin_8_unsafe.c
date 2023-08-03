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

	__ESBMC_assume(tensor_dense_input[0][0] >= 0.06325800873109141f && tensor_dense_input[0][0] <= 0.26473217589315867f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.40380989547550905f && tensor_dense_input[0][1] <= -0.20233572831344182f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.4191106694770001f && tensor_dense_input[0][2] <= -0.21763650231493287f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.27220268334874964f && tensor_dense_input[0][3] <= -0.07072851618668241f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.3992629164189664f && tensor_dense_input[0][4] <= 0.6007370835810336f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.10073708358103359f && tensor_dense_input[0][5] <= 0.10073708358103364f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.026472066499992314f && tensor_dense_input[0][6] <= 0.22794623366205954f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5842842189625422f && tensor_dense_input[0][7] <= -0.382810051800475f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
