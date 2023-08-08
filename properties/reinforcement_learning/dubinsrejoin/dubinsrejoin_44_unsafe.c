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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5370967820388907f && tensor_dense_input[0][0] <= -0.33481592493431134f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.4419429441113352f && tensor_dense_input[0][1] <= -0.2396620870067559f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0272702813926202f && tensor_dense_input[0][2] <= -0.8249894242880409f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.3433024831872155f && tensor_dense_input[0][3] <= -0.1410216260826362f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.39885957144771034f && tensor_dense_input[0][4] <= 0.6011404285522897f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10114042855228966f && tensor_dense_input[0][5] <= 0.10114042855228969f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.06998512913924669f && tensor_dense_input[0][6] <= 0.27226598624382603f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.6089845896425071f && tensor_dense_input[0][7] <= -0.4067037325379278f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
