#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include <c_networks/poly_16_16_16_16.h>

int main()
{
	/* neural net input and output */
    float input_array[1] = {0.0f}, output_array[1] = {0.0f};
    k2c_tensor input_tensor = {&input_array[0],1,1,{1,1,1,1,1}};
    k2c_tensor output_tensor = {&output_array[0],1,1,{1,1,1,1,1}};
	
	/* restrict the input around the location of maximum error (x=-1.53) */
	float x = __VERIFIER_nondet_float();
	__VERIFIER_assume(isgreaterequal(x, -1.58f) && islessequal(x, -1.48f));
	
	/* call the neural network with non-deterministic input */
	input_array[0] = x;
	poly_16_16_16_16(&input_tensor, &output_tensor);
	
	/* compare the network output with an affine approximation of the ground truth */
	float y = -0.25400099999999926f * (x + 1.58f) - 1.18722038f;
	float diff = fabsf(y - output_array[0]);
	
	/* Try decreasing thresholds by a factor of two */
	__VERIFIER_assert(islessequal(diff, 0.02831357375247427150544494547456f)); /* Expected result: verification successful */
	
	return 0;
}
