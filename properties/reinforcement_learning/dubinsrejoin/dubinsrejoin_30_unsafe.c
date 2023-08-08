#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.20699674711034483f && tensor_dense_input[0][0] <= -0.14151463434050998f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.44923995831314717f && tensor_dense_input[0][1] <= -0.3837578455433123f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.2011349219067512f && tensor_dense_input[0][2] <= 0.26661703467658604f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.16039996671689466f && tensor_dense_input[0][3] <= -0.09491785394705982f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4672589436150826f && tensor_dense_input[0][4] <= 0.5327410563849174f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.032741056384917464f && tensor_dense_input[0][5] <= 0.032741056384917394f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.486949661244702f && tensor_dense_input[0][6] <= -0.42146754847486717f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.17629134127469898f && tensor_dense_input[0][7] <= 0.24177345404453382f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
