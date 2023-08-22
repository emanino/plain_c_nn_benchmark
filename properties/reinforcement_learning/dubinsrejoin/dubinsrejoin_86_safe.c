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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8522061627724481f && tensor_dense_input[0][0] <= -0.7850679008276685f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0335691309723898f && tensor_dense_input[0][1] <= -0.9664308690276102f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9697709297580407f && tensor_dense_input[0][2] <= -0.9026326678132611f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0335691309723898f && tensor_dense_input[0][3] <= -0.9664308690276102f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4664308690276103f && tensor_dense_input[0][4] <= 0.5335691309723898f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.033569130972389775f && tensor_dense_input[0][5] <= 0.033569130972389706f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.44608602922699936f && tensor_dense_input[0][6] <= 0.5132242911717788f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.10760780515422498f && tensor_dense_input[0][7] <= 0.17474606709900448f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
