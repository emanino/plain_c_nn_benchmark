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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.5545913907236311f && tensor_dense_input[0][0] <= -0.48198684186731816f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -1.0363022744281565f && tensor_dense_input[0][1] <= -0.9636977255718435f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.9864334855529441f && tensor_dense_input[0][2] <= -0.9138289366966311f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.9881441391699808f && tensor_dense_input[0][3] <= -0.9155395903136678f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4636977255718436f && tensor_dense_input[0][4] <= 0.5363022744281565f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.036302274428156374f && tensor_dense_input[0][5] <= 0.03630227442815651f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.03863407086685565f && tensor_dense_input[0][6] <= 0.03397047798945724f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5362968371239607f && tensor_dense_input[0][7] <= -0.4636922882676478f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
