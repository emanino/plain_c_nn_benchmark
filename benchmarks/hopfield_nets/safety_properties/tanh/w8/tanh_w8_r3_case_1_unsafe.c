#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include <tanh/w8/hop_tanh_w8_r3.h>

int main()
{
    float input_array[24] = {0.0f}, output_array[24] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,24,{3,8,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,24,{3,8,1,1,1}};
	
	input_array[0] = __VERIFIER_nondet_float();
	input_array[1] = __VERIFIER_nondet_float();
	input_array[2] = __VERIFIER_nondet_float();
	input_array[3] = 1.0f;
	input_array[4] = 1.0f;
	input_array[5] = 1.0f;
	input_array[6] = 1.0f;
	input_array[7] = 1.0f;
	
	__VERIFIER_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[1] >= -1.0f && input_array[1] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[2] >= -1.0f && input_array[2] <= 1.0f); /* full input domain */
	
	hop_tanh_w8_r3(&input_tensor,&output_tensor);
	
	__VERIFIER_assert(isgreaterequal(output_array[17], 1.0f)); /* Expected result: verification failure */

    return 0;
}
