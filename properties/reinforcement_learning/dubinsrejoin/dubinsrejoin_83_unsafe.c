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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8632109446991877f && tensor_dense_input[0][0] <= -0.8268915833388927f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0181596806801476f && tensor_dense_input[0][1] <= -0.9818403193198525f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0181596806801476f && tensor_dense_input[0][2] <= -0.9818403193198525f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.8019083045856947f && tensor_dense_input[0][3] <= -0.7655889432253997f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4818403193198526f && tensor_dense_input[0][4] <= 0.5181596806801476f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.01815968068014752f && tensor_dense_input[0][5] <= 0.01815968068014752f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.020763274378378122f && tensor_dense_input[0][6] <= 0.015556086981916916f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.579025104179695f && tensor_dense_input[0][7] <= -0.5427057428194f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
