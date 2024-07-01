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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.02133358802062988f && tensor_dense_input[0][0] <= 0.0021291550251751994f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.43225903784508163f && tensor_dense_input[0][1] <= -0.40879629479927654f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= 0.13831440677499168f && tensor_dense_input[0][2] <= 0.16177714982079677f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.9060865568409046f && tensor_dense_input[0][3] <= -0.8826238137950996f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.48826862847709745f && tensor_dense_input[0][4] <= 0.5117313715229025f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.01173137152290254f && tensor_dense_input[0][5] <= 0.01173137152290254f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.318791299541823f && tensor_dense_input[0][6] <= 0.3422540425876281f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.3634416071312634f && tensor_dense_input[0][7] <= 0.3869043501770685f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
