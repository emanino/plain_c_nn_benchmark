#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8610655415941041f && tensor_input[0][0] <= -0.7919151384058959f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04661691840589592f && tensor_input[0][1] <= 0.11576732159410409f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.1855137584058959f && tensor_input[0][2] <= 0.2546641615941041f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.10958773159410408f && tensor_input[0][3] <= -0.04043732840589591f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.06415443359410408f && tensor_input[0][4] <= 0.004995969594104085f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.11239253840589593f && tensor_input[0][5] <= 0.1815429415941041f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9654247984058959f && tensor_input[0][6] <= 1.034575201594104f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9654247984058959f && tensor_input[0][7] <= 1.034575201594104f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
