#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.9521141617191945f && tensor_input[0][0] <= -0.8877521182808056f);
	__ESBMC_assume(tensor_input[0][1] >= 0.042790518280805594f && tensor_input[0][1] <= 0.1071525617191944f);
	__ESBMC_assume(tensor_input[0][2] >= 0.033439828280805585f && tensor_input[0][2] <= 0.09780187171919441f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05114027971919441f && tensor_input[0][3] <= 0.01322176371919441f);
	__ESBMC_assume(tensor_input[0][4] >= -0.4410560717191944f && tensor_input[0][4] <= -0.3766940282808056f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03218102160532901f && tensor_input[0][5] <= 0.032181021833059806f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9678189782808055f && tensor_input[0][6] <= 1.0321810217191945f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9678189782808055f && tensor_input[0][7] <= 1.0321810217191945f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
