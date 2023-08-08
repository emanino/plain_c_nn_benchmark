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

	__VERIFIER_assume(tensor_dense_input[0][0] >= 0.059206456109005295f && tensor_dense_input[0][0] <= 0.2687837285152448f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.40786144809759517f && tensor_dense_input[0][1] <= -0.1982841756913557f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.4231622220990862f && tensor_dense_input[0][2] <= -0.21358494969284675f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.27625423597083576f && tensor_dense_input[0][3] <= -0.06667696356459629f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.39521136379688027f && tensor_dense_input[0][4] <= 0.6047886362031197f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.1047886362031197f && tensor_dense_input[0][5] <= 0.10478863620311976f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.022420513877906195f && tensor_dense_input[0][6] <= 0.23199778628414566f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5883357715846284f && tensor_dense_input[0][7] <= -0.3787584991783889f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
