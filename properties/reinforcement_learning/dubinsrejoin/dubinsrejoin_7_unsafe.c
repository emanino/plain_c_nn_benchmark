#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5403200084937273f && tensor_dense_input[0][0] <= -0.3315926984794747f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.4451661705661719f && tensor_dense_input[0][1] <= -0.23643886055191923f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0304935078474569f && tensor_dense_input[0][2] <= -0.8217661978332043f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.3465257096420522f && tensor_dense_input[0][3] <= -0.13779839962779952f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3956363449928737f && tensor_dense_input[0][4] <= 0.6043636550071263f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10436365500712631f && tensor_dense_input[0][5] <= 0.10436365500712634f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.06676190268441004f && tensor_dense_input[0][6] <= 0.27548921269866267f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.6122078160973438f && tensor_dense_input[0][7] <= -0.40348050608309116f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
