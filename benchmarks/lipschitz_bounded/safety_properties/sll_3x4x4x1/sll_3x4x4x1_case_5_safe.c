#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_onnx__Pad_0[1][3], float tensor_43[1][1]);

int main()
{
    float tensor_onnx__Pad_0[1][3];
    float tensor_43[1][1];
    
	tensor_onnx__Pad_0[0][0] = __VERIFIER_nondet_float();
	tensor_onnx__Pad_0[0][1] = __VERIFIER_nondet_float();
	tensor_onnx__Pad_0[0][2] = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(tensor_onnx__Pad_0[0][0] >= -1.6f && tensor_onnx__Pad_0[0][0] <= -1.4f);
	__VERIFIER_assume(tensor_onnx__Pad_0[0][1] >= -1.6f && tensor_onnx__Pad_0[0][1] <= -1.4f);
	__VERIFIER_assume(tensor_onnx__Pad_0[0][2] >= -1.6f && tensor_onnx__Pad_0[0][2] <= -1.4f);
	
	entry(tensor_onnx__Pad_0, tensor_43);
	
	__VERIFIER_assert(tensor_43[0][0] <= 1.018753f); /* test: 0.379770, bound: 0.499138 */

    return 0;
}
