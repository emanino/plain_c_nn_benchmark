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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9283819324128401f && tensor_input[0][0] <= -0.83195206758716f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0009058375871599592f && tensor_input[0][1] <= 0.09733570241284004f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.62438682758716f && tensor_input[0][2] <= 0.7208166924128401f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.24254389241284002f && tensor_input[0][3] <= -0.14611402758715997f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.45709013241284f && tensor_input[0][4] <= -0.36066026758715997f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.04821492713983904f && tensor_input[0][5] <= 0.04821493768584104f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.95178506758716f && tensor_input[0][6] <= 1.04821493241284f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.95178506758716f && tensor_input[0][7] <= 1.04821493241284f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
