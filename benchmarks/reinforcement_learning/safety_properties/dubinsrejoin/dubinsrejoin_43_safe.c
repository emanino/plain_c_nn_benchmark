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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.39480400902714685f && tensor_dense_input[0][0] <= -0.2645313732521001f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5938759445271229f && tensor_dense_input[0][1] <= -0.4636033087520761f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.09954471810212451f && tensor_dense_input[0][2] <= 0.22981735387717134f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.518913714133312f && tensor_dense_input[0][3] <= -0.3886410783582651f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4348636821124766f && tensor_dense_input[0][4] <= 0.5651363178875234f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0651363178875234f && tensor_dense_input[0][5] <= 0.06513631788752343f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.37722987729758495f && tensor_dense_input[0][6] <= -0.2469572415225381f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.32550112293805644f && tensor_dense_input[0][7] <= 0.4557737587131032f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
