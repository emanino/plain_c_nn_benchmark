#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.7167288759059309f && tensor_input[0][0] <= -0.652586324094069f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04295727009406902f && tensor_input[0][1] <= 0.10709982190593098f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0034733289059309808f && tensor_input[0][2] <= 0.06066922290593098f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.06113643590593098f && tensor_input[0][3] <= 0.0030061159059309797f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.08495243090593098f && tensor_input[0][4] <= -0.02080987909406902f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.08865668590593098f && tensor_input[0][5] <= -0.024514134094069023f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.967928724094069f && tensor_input[0][6] <= 1.032071275905931f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.967928724094069f && tensor_input[0][7] <= 1.032071275905931f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
