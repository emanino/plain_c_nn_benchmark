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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8360881186704516f && tensor_dense_input[0][0] <= -0.801185944929665f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0174510868703934f && tensor_dense_input[0][1] <= -0.9825489131296067f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9536528856560442f && tensor_dense_input[0][2] <= -0.9187507119152576f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0174510868703934f && tensor_dense_input[0][3] <= -0.9825489131296067f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4825489131296067f && tensor_dense_input[0][4] <= 0.5174510868703933f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.017451086870393356f && tensor_dense_input[0][5] <= 0.017451086870393286f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.46220407332899577f && tensor_dense_input[0][6] <= 0.4971062470697824f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.1237258492562214f && tensor_dense_input[0][7] <= 0.15862802299700804f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
