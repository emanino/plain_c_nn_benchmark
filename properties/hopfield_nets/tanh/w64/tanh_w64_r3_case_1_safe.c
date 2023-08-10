#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include <hopfield_nets/tanh/w64/hop_tanh_w64_r3.h>

int main()
{
    float input_array[192] = {0.0f}, output_array[192] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,192,{3,64,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,192,{3,64,1,1,1}};
	
	input_array[0] = __VERIFIER_nondet_float();
	input_array[1] = __VERIFIER_nondet_float();
	input_array[2] = __VERIFIER_nondet_float();
	input_array[3] = __VERIFIER_nondet_float();
	input_array[4] = __VERIFIER_nondet_float();
	input_array[5] = __VERIFIER_nondet_float();
	input_array[6] = __VERIFIER_nondet_float();
	input_array[7] = __VERIFIER_nondet_float();
	input_array[8] = __VERIFIER_nondet_float();
	input_array[9] = __VERIFIER_nondet_float();
	input_array[10] = __VERIFIER_nondet_float();
	input_array[11] = __VERIFIER_nondet_float();
	input_array[12] = __VERIFIER_nondet_float();
	input_array[13] = __VERIFIER_nondet_float();
	input_array[14] = __VERIFIER_nondet_float();
	input_array[15] = __VERIFIER_nondet_float();
	input_array[16] = __VERIFIER_nondet_float();
	input_array[17] = __VERIFIER_nondet_float();
	input_array[18] = __VERIFIER_nondet_float();
	input_array[19] = __VERIFIER_nondet_float();
	input_array[20] = __VERIFIER_nondet_float();
	input_array[21] = __VERIFIER_nondet_float();
	input_array[22] = __VERIFIER_nondet_float();
	input_array[23] = __VERIFIER_nondet_float();
	input_array[24] = __VERIFIER_nondet_float();
	input_array[25] = __VERIFIER_nondet_float();
	input_array[26] = __VERIFIER_nondet_float();
	input_array[27] = __VERIFIER_nondet_float();
	input_array[28] = __VERIFIER_nondet_float();
	input_array[29] = __VERIFIER_nondet_float();
	input_array[30] = __VERIFIER_nondet_float();
	input_array[31] = 1.0f;
	input_array[32] = 1.0f;
	input_array[33] = 1.0f;
	input_array[34] = 1.0f;
	input_array[35] = 1.0f;
	input_array[36] = 1.0f;
	input_array[37] = 1.0f;
	input_array[38] = 1.0f;
	input_array[39] = 1.0f;
	input_array[40] = 1.0f;
	input_array[41] = 1.0f;
	input_array[42] = 1.0f;
	input_array[43] = 1.0f;
	input_array[44] = 1.0f;
	input_array[45] = 1.0f;
	input_array[46] = 1.0f;
	input_array[47] = 1.0f;
	input_array[48] = 1.0f;
	input_array[49] = 1.0f;
	input_array[50] = 1.0f;
	input_array[51] = 1.0f;
	input_array[52] = 1.0f;
	input_array[53] = 1.0f;
	input_array[54] = 1.0f;
	input_array[55] = 1.0f;
	input_array[56] = 1.0f;
	input_array[57] = 1.0f;
	input_array[58] = 1.0f;
	input_array[59] = 1.0f;
	input_array[60] = 1.0f;
	input_array[61] = 1.0f;
	input_array[62] = 1.0f;
	input_array[63] = 1.0f;
	
	__VERIFIER_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[1] >= -1.0f && input_array[1] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[2] >= -1.0f && input_array[2] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[3] >= -1.0f && input_array[3] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[4] >= -1.0f && input_array[4] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[5] >= -1.0f && input_array[5] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[6] >= -1.0f && input_array[6] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[7] >= -1.0f && input_array[7] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[8] >= -1.0f && input_array[8] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[9] >= -1.0f && input_array[9] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[10] >= -1.0f && input_array[10] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[11] >= -1.0f && input_array[11] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[12] >= -1.0f && input_array[12] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[13] >= -1.0f && input_array[13] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[14] >= -1.0f && input_array[14] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[15] >= -1.0f && input_array[15] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[16] >= -1.0f && input_array[16] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[17] >= -1.0f && input_array[17] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[18] >= -1.0f && input_array[18] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[19] >= -1.0f && input_array[19] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[20] >= -1.0f && input_array[20] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[21] >= -1.0f && input_array[21] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[22] >= -1.0f && input_array[22] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[23] >= -1.0f && input_array[23] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[24] >= -1.0f && input_array[24] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[25] >= -1.0f && input_array[25] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[26] >= -1.0f && input_array[26] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[27] >= -1.0f && input_array[27] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[28] >= -1.0f && input_array[28] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[29] >= -1.0f && input_array[29] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[30] >= -1.0f && input_array[30] <= 1.0f); /* full input domain */
	
	hop_tanh_w64_r3(&input_tensor,&output_tensor);
	
	__VERIFIER_assert(output_array[129] == 1.0f); /* Expected result: verification successful */

    return 0;
}
