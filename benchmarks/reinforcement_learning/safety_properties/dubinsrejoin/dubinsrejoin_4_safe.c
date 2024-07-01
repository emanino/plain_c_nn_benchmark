#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.05260955440377776f && tensor_dense_input[0][0] <= 0.15173565668858238f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5646195978229648f && tensor_dense_input[0][1] <= -0.36027438673060463f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.5427809286753846f && tensor_dense_input[0][2] <= -0.3384357175830245f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.4659685773280517f && tensor_dense_input[0][3] <= -0.26162336623569155f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3978273944538199f && tensor_dense_input[0][4] <= 0.60217260554618f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10217260554618007f && tensor_dense_input[0][5] <= 0.10217260554618007f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.05747879173176812f && tensor_dense_input[0][6] <= 0.26182400282412827f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5759989781207748f && tensor_dense_input[0][7] <= -0.37165376702841474f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
