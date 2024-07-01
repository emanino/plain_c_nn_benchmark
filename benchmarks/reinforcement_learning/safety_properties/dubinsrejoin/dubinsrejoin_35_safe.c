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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5538903171409981f && tensor_dense_input[0][0] <= -0.41843933544605516f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.4430386399704017f && tensor_dense_input[0][1] <= -0.30758765827545864f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9563438512913368f && tensor_dense_input[0][2] <= -0.8208928695963938f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.73973908292576f && tensor_dense_input[0][3] <= -0.604288101230817f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4322745091525285f && tensor_dense_input[0][4] <= 0.5677254908474715f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06772549084747155f && tensor_dense_input[0][5] <= 0.06772549084747147f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.390451397141132f && tensor_dense_input[0][6] <= 0.5259023788360749f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.267910253786809f && tensor_dense_input[0][7] <= -0.13245927209186598f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
