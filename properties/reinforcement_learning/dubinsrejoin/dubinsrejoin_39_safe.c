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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.19131413040696515f && tensor_dense_input[0][0] <= -0.125348785943717f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.276823404054314f && tensor_dense_input[0][1] <= -0.21085805959106585f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.16401547356979213f && tensor_dense_input[0][2] <= 0.22998081803304027f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.628591612591874f && tensor_dense_input[0][3] <= -0.5626262681286258f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4670173277683759f && tensor_dense_input[0][4] <= 0.5329826722316241f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.03298267223162404f && tensor_dense_input[0][5] <= 0.032982672231624106f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.09399273061726901f && tensor_dense_input[0][6] <= 0.15995807508051715f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.4506258957976875f && tensor_dense_input[0][7] <= 0.5165912402609357f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][7]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][7])))));

	return 0;
}
