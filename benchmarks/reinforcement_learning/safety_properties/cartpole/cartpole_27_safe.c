#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.2529235666821996f && tensor_input[0][0] <= -0.23678291331780038f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.1336445133178004f && tensor_input[0][1] <= 0.14978516668219963f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06131201168219961f && tensor_input[0][2] <= -0.045171358317800385f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.6265739266821997f && tensor_input[0][3] <= -0.6104332733178004f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
