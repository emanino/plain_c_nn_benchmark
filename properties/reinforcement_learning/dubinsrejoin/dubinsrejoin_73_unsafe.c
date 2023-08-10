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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.42483258161722504f && tensor_dense_input[0][0] <= -0.28960970994947843f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.6657592123623731f && tensor_dense_input[0][1] <= -0.5305363406946265f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.7869124516831105f && tensor_dense_input[0][2] <= -0.6516895800153639f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.3209430762940696f && tensor_dense_input[0][3] <= -0.18572020462632302f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4323885641661267f && tensor_dense_input[0][4] <= 0.5676114358338732f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06761143583387316f && tensor_dense_input[0][5] <= 0.06761143583387338f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.18519103427087574f && tensor_dense_input[0][6] <= -0.04996816260312921f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5535898695440464f && tensor_dense_input[0][7] <= -0.41836699787629994f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
