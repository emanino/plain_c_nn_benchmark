#include <verifier_functions.h>

void entry(const float tensor_onnx__Gemm_0[1][13], float tensor_7[1][2]);

int main()
{
	float tensor_onnx__Gemm_0[1][13];
	float tensor_7[1][2];

	tensor_onnx__Gemm_0[0][0] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][1] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][2] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][3] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][4] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][5] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][6] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][7] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][8] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][9] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][10] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][11] = __VERIFIER_nondet_float();
	tensor_onnx__Gemm_0[0][12] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_onnx__Gemm_0[0][0] >= 0.0f && tensor_onnx__Gemm_0[0][0] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][1] >= 0.0f && tensor_onnx__Gemm_0[0][1] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][2] >= 0.0f && tensor_onnx__Gemm_0[0][2] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][3] >= 0.0f && tensor_onnx__Gemm_0[0][3] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][4] >= 0.0f && tensor_onnx__Gemm_0[0][4] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][5] >= 0.0f && tensor_onnx__Gemm_0[0][5] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][6] >= 0.0f && tensor_onnx__Gemm_0[0][6] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][7] >= 0.0f && tensor_onnx__Gemm_0[0][7] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][8] >= 0.0f && tensor_onnx__Gemm_0[0][8] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][9] >= 0.0f && tensor_onnx__Gemm_0[0][9] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][10] >= 0.0f && tensor_onnx__Gemm_0[0][10] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][11] >= 0.0f && tensor_onnx__Gemm_0[0][11] <= 1.0f);
	__VERIFIER_assume(tensor_onnx__Gemm_0[0][12] >= 0.0f && tensor_onnx__Gemm_0[0][12] <= 1.0f);

	entry(tensor_onnx__Gemm_0, tensor_7);

	// expected verdict: sat
__VERIFIER_assert(!(tensor_7[0][0] >= 1.0f && tensor_7[0][1] <= 0.0f));

	return 0;
}
