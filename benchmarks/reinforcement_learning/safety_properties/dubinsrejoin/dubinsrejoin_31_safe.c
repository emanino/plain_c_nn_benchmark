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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.9474233614039098f && tensor_dense_input[0][0] <= -0.7426791666341706f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.1023720973848696f && tensor_dense_input[0][1] <= -0.8976279026151304f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.1023720973848696f && tensor_dense_input[0][2] <= -0.8976279026151304f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.8861207212904169f && tensor_dense_input[0][3] <= -0.6813765265206776f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3976279026151304f && tensor_dense_input[0][4] <= 0.6023720973848697f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10237209738486967f && tensor_dense_input[0][5] <= 0.10237209738486967f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.10497569108310027f && tensor_dense_input[0][6] <= 0.09976850368663907f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.6632375208844171f && tensor_dense_input[0][7] <= -0.4584933261146778f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
