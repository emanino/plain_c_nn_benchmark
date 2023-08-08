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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5674194120675035f && tensor_dense_input[0][0] <= -0.36660014503771143f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0301228034329921f && tensor_dense_input[0][1] <= -0.8293035364032002f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.07306907017429098f && tensor_dense_input[0][2] <= 0.127750196855501f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.9551712225953112f && tensor_dense_input[0][3] <= -0.7543519555655193f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.399590366485104f && tensor_dense_input[0][4] <= 0.600409633514896f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10040963351489601f && tensor_dense_input[0][5] <= 0.10040963351489599f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.4124947775207318f && tensor_dense_input[0][6] <= -0.2116755104909398f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.29023453051530773f && tensor_dense_input[0][7] <= 0.49105379754509976f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
