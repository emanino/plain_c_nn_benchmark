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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7495760336610015f && tensor_input[0][0] <= -0.6937437663389986f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0011181813389986237f && tensor_input[0][1] <= 0.05695044866100138f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0036089663389986225f && tensor_input[0][2] <= 0.059441233661001375f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.08784418366100137f && tensor_input[0][3] <= -0.03201191633899862f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.03833293266100138f && tensor_input[0][4] <= 0.017499334661001377f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.05912959966100138f && tensor_input[0][5] <= -0.003297332338998621f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9720838663389986f && tensor_input[0][6] <= 1.0279161336610014f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9720838663389986f && tensor_input[0][7] <= 1.0279161336610014f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
