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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9374637970303588f && tensor_input[0][0] <= -0.8510011029696412f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.015031104969641162f && tensor_input[0][1] <= 0.10149379903035884f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.9249365529696412f && tensor_input[0][2] <= 1.0113992470303588f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3214321470303589f && tensor_input[0][3] <= -0.2349694529696412f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.45210094703035886f && tensor_input[0][4] <= -0.36563825296964114f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.05063132403035884f && tensor_input[0][5] <= 0.035831370030358835f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9567686529696412f && tensor_input[0][6] <= 1.043231347030359f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.04323134703035884f && tensor_input[0][7] <= 0.04323134703035884f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
