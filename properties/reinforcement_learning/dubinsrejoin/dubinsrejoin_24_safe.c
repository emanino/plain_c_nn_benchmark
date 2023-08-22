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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.2744344376851447f && tensor_dense_input[0][0] <= -0.13988515032972343f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.704279390381162f && tensor_dense_input[0][1] <= -0.5697301030257408f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.4567063223042652f && tensor_dense_input[0][2] <= -0.32215703494884396f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0672746436777107f && tensor_dense_input[0][3] <= -0.9327253563222894f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43272535632228937f && tensor_dense_input[0][4] <= 0.5672746436777106f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0672746436777106f && tensor_dense_input[0][5] <= 0.06727464367771069f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.42707677459730087f && tensor_dense_input[0][6] <= 0.5616260619527221f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.0076698374365427036f && tensor_dense_input[0][7] <= 0.142219124791964f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
