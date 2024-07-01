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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.2488309626477497f && tensor_dense_input[0][0] <= -0.11959388370512822f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.49063330614420464f && tensor_dense_input[0][1] <= -0.36139622720158315f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.08169137165902435f && tensor_dense_input[0][2] <= 0.21092845060164583f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.11546003081079148f && tensor_dense_input[0][3] <= 0.013777048131830005f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43538146052868926f && tensor_dense_input[0][4] <= 0.5646185394713108f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06461853947131063f && tensor_dense_input[0][5] <= 0.06461853947131085f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5547892938844474f && tensor_dense_input[0][6] <= -0.4255522149418259f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.03403556088978146f && tensor_dense_input[0][7] <= 0.16327263983240295f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
