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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.39569352048709305f && tensor_dense_input[0][0] <= -0.206941115892163f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.30463241134265506f && tensor_dense_input[0][1] <= 0.4933848159375852f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.09437620229746504f && tensor_dense_input[0][2] <= 0.09437620229746504f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.09437620229746504f && tensor_dense_input[0][3] <= 0.09437620229746504f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= -1.0042989248993954f && tensor_dense_input[0][4] <= -0.8155465203044653f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.09437620229746504f && tensor_dense_input[0][5] <= 0.09437620229746504f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5004365695545813f && tensor_dense_input[0][6] <= -0.3116841649596511f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.12492371352200698f && tensor_dense_input[0][7] <= 0.3136761181169371f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
