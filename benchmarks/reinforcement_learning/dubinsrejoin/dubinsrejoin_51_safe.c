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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8094440585190992f && tensor_dense_input[0][0] <= -0.6791992006390333f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5634934642230294f && tensor_dense_input[0][1] <= -0.43324860634296364f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.065122428940033f && tensor_dense_input[0][2] <= -0.934877571059967f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.695337287073426f && tensor_dense_input[0][3] <= -0.5650924291933603f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4348775710599672f && tensor_dense_input[0][4] <= 0.565122428940033f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06512242894003285f && tensor_dense_input[0][5] <= 0.06512242894003294f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.3157231038939285f && tensor_dense_input[0][6] <= 0.4459679617739943f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.44214541042668004f && tensor_dense_input[0][7] <= -0.31190055254661425f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
