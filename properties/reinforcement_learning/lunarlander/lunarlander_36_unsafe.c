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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9521141617191945f && tensor_input[0][0] <= -0.8877521182808056f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.042790518280805594f && tensor_input[0][1] <= 0.1071525617191944f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.033439828280805585f && tensor_input[0][2] <= 0.09780187171919441f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.05114027971919441f && tensor_input[0][3] <= 0.01322176371919441f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4410560717191944f && tensor_input[0][4] <= -0.3766940282808056f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03218102160532901f && tensor_input[0][5] <= 0.032181021833059806f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9678189782808055f && tensor_input[0][6] <= 1.0321810217191945f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9678189782808055f && tensor_input[0][7] <= 1.0321810217191945f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
