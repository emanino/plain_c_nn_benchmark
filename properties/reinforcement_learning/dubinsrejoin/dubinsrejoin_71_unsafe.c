#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.07476615222595781f && tensor_dense_input[0][0] <= 0.055561719230503126f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.48569160205040957f && tensor_dense_input[0][1] <= -0.3553637305939486f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.08488184256966376f && tensor_dense_input[0][2] <= 0.2152097140261247f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.9595191210462325f && tensor_dense_input[0][3] <= -0.8291912495897716f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4348360642717695f && tensor_dense_input[0][4] <= 0.5651639357282304f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06516393572823047f && tensor_dense_input[0][5] <= 0.06516393572823047f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.26535873533649507f && tensor_dense_input[0][6] <= 0.39568660679295603f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.31000904292593545f && tensor_dense_input[0][7] <= 0.4403369143823964f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
