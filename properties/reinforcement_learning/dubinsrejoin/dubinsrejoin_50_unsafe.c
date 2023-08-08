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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.39200078100322233f && tensor_dense_input[0][0] <= -0.26375124627684177f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.6683512078641549f && tensor_dense_input[0][1] <= -0.5401016731377744f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.10630875035984827f && tensor_dense_input[0][2] <= 0.2345582850862289f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.7094317501283516f && tensor_dense_input[0][3] <= -0.581182215401971f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4358752326368097f && tensor_dense_input[0][4] <= 0.5641247673631903f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06412476736319037f && tensor_dense_input[0][5] <= 0.06412476736319025f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.27770273984268956f && tensor_dense_input[0][6] <= -0.1494532051163089f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.3879642168772425f && tensor_dense_input[0][7] <= 0.516213751603623f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
