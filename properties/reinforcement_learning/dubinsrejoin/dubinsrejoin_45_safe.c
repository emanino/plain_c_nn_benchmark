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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.47340151413996234f && tensor_dense_input[0][0] <= -0.3435257882546513f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0502320024046494f && tensor_dense_input[0][1] <= -0.9203562765193385f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9731105152694492f && tensor_dense_input[0][2] <= -0.8432347893841383f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -1.0649378629426556f && tensor_dense_input[0][3] <= -0.9350621370573444f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4350621370573446f && tensor_dense_input[0][4] <= 0.5649378629426556f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06493786294265555f && tensor_dense_input[0][5] <= 0.0649378629426555f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.21868827874192864f && tensor_dense_input[0][6] <= 0.3485640046272397f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5196310124421639f && tensor_dense_input[0][7] <= -0.3897552865568529f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
