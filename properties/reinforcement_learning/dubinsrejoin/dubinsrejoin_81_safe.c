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

	__VERIFIER_assume(tensor_dense_input[0][0] >= 0.310916959493531f && tensor_dense_input[0][0] <= 0.37520272520055836f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5525221564808782f && tensor_dense_input[0][1] <= -0.4882363907738508f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.7980258420493267f && tensor_dense_input[0][2] <= 0.862311607756354f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.6653270169047303f && tensor_dense_input[0][3] <= -0.6010412511977028f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4678571171464863f && tensor_dense_input[0][4] <= 0.5321428828535137f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03214288285351368f && tensor_dense_input[0][5] <= 0.032142882853513695f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.1780054493339975f && tensor_dense_input[0][6] <= -0.11371968362697013f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.44610821406078127f && tensor_dense_input[0][7] <= 0.5103939797678086f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][1]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
