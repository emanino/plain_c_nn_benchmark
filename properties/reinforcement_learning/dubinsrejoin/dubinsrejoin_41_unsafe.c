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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5222428033353286f && tensor_dense_input[0][0] <= -0.38800941390737165f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.7850535922487583f && tensor_dense_input[0][1] <= -0.6508202028208012f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0005632062131737f && tensor_dense_input[0][2] <= -0.8663298167852168f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.639418458469923f && tensor_dense_input[0][3] <= -0.5051850690419659f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4328833052860216f && tensor_dense_input[0][4] <= 0.5671166947139786f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06711669471397853f && tensor_dense_input[0][5] <= 0.06711669471397845f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.04591978118892312f && tensor_dense_input[0][6] <= 0.1801531706168801f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5541718816440149f && tensor_dense_input[0][7] <= -0.41993849221605795f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
