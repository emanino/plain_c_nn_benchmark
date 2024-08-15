#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include <poly_128_128.h>

int main()
{
	/* neural net input and output */
    float input_array[1] = {0.0f}, output_array[1] = {0.0f};
    k2c_tensor input_tensor = {&input_array[0],1,1,{1,1,1,1,1}};
    k2c_tensor output_tensor = {&output_array[0],1,1,{1,1,1,1,1}};
	
	/* restrict the input around the location of maximum error (x=3) */
	float x = __VERIFIER_nondet_float();
	__VERIFIER_assume(isgreaterequal(x, 2.9f) && islessequal(x, 3.0f));
	
	/* call the neural network with non-deterministic input */
	input_array[0] = x;
	poly_128_128(&input_tensor, &output_tensor);
	
	/* compare the network output with an affine approximation of the ground truth */
	float y = 2.8873749999999974f * (x - 2.9f) - 0.16373749999999976f;
	float diff = fabsf(y - output_array[0]);
	
	/* Try decreasing thresholds by a factor of two */
	__VERIFIER_assert(islessequal(diff, 0.16843020484140960635549035591235f)); /* Expected result: verification successful */
	
	return 0;
}
