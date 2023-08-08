#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.2612903011798982f && tensor_input[0][0] <= -0.24529505882010175f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.32744971882010177f && tensor_input[0][1] <= 0.3434449611798982f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.025558597179898234f && tensor_input[0][2] <= -0.009563354820101764f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.8878846211798982f && tensor_input[0][3] <= -0.8718893788201018f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
