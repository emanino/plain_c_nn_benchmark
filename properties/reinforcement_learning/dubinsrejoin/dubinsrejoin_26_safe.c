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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.05167094257126922f && tensor_dense_input[0][0] <= 0.15259850485656504f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5847744210082533f && tensor_dense_input[0][1] <= -0.380504973580419f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.5513803110192153f && tensor_dense_input[0][2] <= -0.34711086359138105f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.601819862784714f && tensor_dense_input[0][3] <= -0.3975504153568797f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3978652762860828f && tensor_dense_input[0][4] <= 0.6021347237139171f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10213472371391716f && tensor_dense_input[0][5] <= 0.1021347237139171f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.16248174610719945f && tensor_dense_input[0][6] <= 0.3667511935350337f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5263730104106861f && tensor_dense_input[0][7] <= -0.32210356298285187f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
