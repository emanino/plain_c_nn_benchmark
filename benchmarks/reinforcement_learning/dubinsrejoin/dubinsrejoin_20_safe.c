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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5693876956281261f && tensor_dense_input[0][0] <= -0.3646318614770888f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0320910869936148f && tensor_dense_input[0][1] <= -0.8273352528425775f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.07503735373491363f && tensor_dense_input[0][2] <= 0.12971848041612366f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.9571395061559339f && tensor_dense_input[0][3] <= -0.7523836720048965f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.39762208292448137f && tensor_dense_input[0][4] <= 0.6023779170755187f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10237791707551866f && tensor_dense_input[0][5] <= 0.10237791707551863f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.41446306108135444f && tensor_dense_input[0][6] <= -0.20970722693031718f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.2882662469546851f && tensor_dense_input[0][7] <= 0.4930220811057224f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
