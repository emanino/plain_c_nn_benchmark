#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.6908010298671202f && tensor_dense_input[0][0] <= -0.5558388582371215f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5225940402687732f && tensor_dense_input[0][1] <= -0.3876318686387744f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0674810858149995f && tensor_dense_input[0][2] <= -0.9325189141850007f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.7184982927433653f && tensor_dense_input[0][3] <= -0.5835361211133666f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4325189141850006f && tensor_dense_input[0][4] <= 0.5674810858149993f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06748108581499943f && tensor_dense_input[0][5] <= 0.06748108581499934f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.33218867099125043f && tensor_dense_input[0][6] <= 0.46715084262124923f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.36792090590287163f && tensor_dense_input[0][7] <= -0.23295873427287284f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
