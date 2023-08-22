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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.45775869619892334f && tensor_dense_input[0][0] <= -0.3288929129454458f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.901624090902523f && tensor_dense_input[0][1] <= -0.7727583076490456f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.33079023880855224f && tensor_dense_input[0][2] <= -0.2019244555550747f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.41801369933938165f && tensor_dense_input[0][3] <= -0.2891479160859041f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4355671083732612f && tensor_dense_input[0][4] <= 0.5644328916267387f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06443289162673876f && tensor_dense_input[0][5] <= 0.06443289162673874f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5467360049497937f && tensor_dense_input[0][6] <= -0.41787022169631616f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.19628017782895235f && tensor_dense_input[0][7] <= -0.06741439457547486f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
