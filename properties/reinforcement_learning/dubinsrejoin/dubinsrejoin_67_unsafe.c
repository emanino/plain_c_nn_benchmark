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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.49277070927571276f && tensor_dense_input[0][0] <= -0.3603137805035532f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.9481231035094829f && tensor_dense_input[0][1] <= -0.8156661747373234f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9469806275288525f && tensor_dense_input[0][2] <= -0.814523698756693f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.7390935597591329f && tensor_dense_input[0][3] <= -0.6066366309869734f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4337715356139202f && tensor_dense_input[0][4] <= 0.5662284643860797f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06622846438607968f && tensor_dense_input[0][5] <= 0.06622846438607982f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.016839779591547026f && tensor_dense_input[0][6] <= 0.11561714918061247f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5998485598312683f && tensor_dense_input[0][7] <= -0.46739163105910875f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
