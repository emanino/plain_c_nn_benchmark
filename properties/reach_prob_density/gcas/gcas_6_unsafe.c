#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][14], float tensor_output[1][14]);

int main()
{
	float tensor_input[1][14];
	float tensor_output[1][14];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();
	tensor_input[0][8] = nondet_float();
	tensor_input[0][9] = nondet_float();
	tensor_input[0][10] = nondet_float();
	tensor_input[0][11] = nondet_float();
	tensor_input[0][12] = nondet_float();
	tensor_input[0][13] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -1.7492930226200185f && tensor_input[0][0] <= 1.7312612073369356f);
	__VERIFIER_assume(tensor_input[0][1] >= -1.7306896924315087f && tensor_input[0][1] <= 1.7194907929960244f);
	__VERIFIER_assume(tensor_input[0][2] >= -6.856186761127681f && tensor_input[0][2] <= 6.8640379382196155f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__VERIFIER_assume(tensor_input[0][4] >= -1.2120519616738326f && tensor_input[0][4] <= 5.195179481948719f);
	__VERIFIER_assume(tensor_input[0][5] >= -6.8356139084846035f && tensor_input[0][5] <= 6.90211584478238f);
	__VERIFIER_assume(tensor_input[0][6] >= -6.850710545768149f && tensor_input[0][6] <= 6.839205647570927f);
	__VERIFIER_assume(tensor_input[0][7] >= -6.974735887608149f && tensor_input[0][7] <= 6.964618881495624f);
	__VERIFIER_assume(tensor_input[0][8] >= -6.8559133523561f && tensor_input[0][8] <= 6.824128877175476f);
	__VERIFIER_assume(tensor_input[0][9] >= -6.9197729478190615f && tensor_input[0][9] <= 6.917144390558026f);
	__VERIFIER_assume(tensor_input[0][10] >= -6.8323039584820195f && tensor_input[0][10] <= 6.805704984308347f);
	__VERIFIER_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__VERIFIER_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__VERIFIER_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
