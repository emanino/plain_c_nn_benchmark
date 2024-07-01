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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7681482777366399f && tensor_input[0][0] <= -0.7318517222633601f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.18185172226336013f && tensor_input[0][1] <= 0.2181482777366399f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.018148277736639885f && tensor_input[0][2] <= 0.018148277736639885f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.018148277736639885f && tensor_input[0][3] <= 0.018148277736639885f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.03185172226336013f && tensor_input[0][4] <= 0.0681482777366399f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.018148277736639885f && tensor_input[0][5] <= 0.018148277736639885f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.018148277736639885f && tensor_input[0][6] <= 0.018148277736639885f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.018148277736639885f && tensor_input[0][7] <= 0.018148277736639885f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][1])));

	return 0;
}
