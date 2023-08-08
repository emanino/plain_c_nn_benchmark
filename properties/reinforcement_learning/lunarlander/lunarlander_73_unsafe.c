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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8777564465722728f && tensor_input[0][0] <= -0.8075272134277273f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04271358342772723f && tensor_input[0][1] <= 0.11294281657227277f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.010771666572272773f && tensor_input[0][2] <= 0.059457566572272774f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.06940742257227278f && tensor_input[0][3] <= 0.00082181057227277f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05480239342772723f && tensor_input[0][4] <= 0.1250316265722728f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03140342657227277f && tensor_input[0][5] <= 0.038825806572272775f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9648853834277272f && tensor_input[0][6] <= 1.0351146165722729f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9648853834277272f && tensor_input[0][7] <= 1.0351146165722729f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
