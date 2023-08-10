#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include "../hopfield_nets/hop_tanh_w4_r1.h"

int main()
{
    float input_array[4] = {0.0f}, output_array[4] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,4,{1,4,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,4,{1,4,1,1,1}}; 
	
	input_array[0] = __VERIFIER_nondet_float();
	input_array[1] = 1.0f;
	input_array[2] = 1.0f;
	input_array[3] = 1.0f;
	
	__VERIFIER_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	
	hop_tanh_w4_r1(&input_tensor,&output_tensor);
	
	__VERIFIER_assert(isgreaterequal(output_array[2], 0.0f)); /* Expected result: verification successful */

    return 0;
}
