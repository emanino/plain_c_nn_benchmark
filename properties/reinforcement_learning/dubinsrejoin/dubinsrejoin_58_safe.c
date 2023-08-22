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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5105861642967294f && tensor_dense_input[0][0] <= -0.47856104998968346f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.39235763676712104f && tensor_dense_input[0][1] <= -0.36033252246007513f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.4644989499100116f && tensor_dense_input[0][2] <= -0.4324738356029657f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.8902290746605557f && tensor_dense_input[0][3] <= -0.8582039603535097f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4839874428464769f && tensor_dense_input[0][4] <= 0.5160125571535228f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.016012557153522972f && tensor_dense_input[0][5] <= 0.016012557153522972f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.3921131486875182f && tensor_dense_input[0][6] <= 0.4241382629945641f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.2728358602417465f && tensor_dense_input[0][7] <= 0.3048609745487924f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
