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

	__VERIFIER_assume(tensor_input[0][0] >= -0.649376461283824f && tensor_input[0][0] <= -0.615254338716176f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.10218008871617602f && tensor_input[0][1] <= 0.136302211283824f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.006523194716176017f && tensor_input[0][2] <= 0.040645317283823985f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.020439365983823985f && tensor_input[0][3] <= 0.013682756583823983f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.06957114428382398f && tensor_input[0][4] <= -0.03544902171617602f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03297228628382398f && tensor_input[0][5] <= 0.001149836283823983f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.017061061283823984f && tensor_input[0][6] <= 0.017061061283823984f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.982938938716176f && tensor_input[0][7] <= 1.017061061283824f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
