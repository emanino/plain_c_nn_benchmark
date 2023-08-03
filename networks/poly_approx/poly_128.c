#include <math.h> 
 #include <string.h> 
#include "k2c_include.h" 
#include "k2c_tensor_include.h" 

 


void poly_128(k2c_tensor* dense_62_input_input, k2c_tensor* dense_63_output) { 

float dense_62_output_array[128] = {0}; 
k2c_tensor dense_62_output = {&dense_62_output_array[0],1,128,{128,  1,  1,  1,  1}}; 
float dense_62_kernel_array[128] = {
+2.84518212e-01f,-2.27132604e-01f,-1.49764806e-01f,-3.35831910e-01f,+1.48387566e-01f,
-1.66379184e-01f,+2.40962341e-01f,+3.46300870e-01f,+2.14947283e-01f,-2.56352454e-01f,
-1.63781956e-01f,-3.07654262e-01f,+2.77074724e-01f,-1.17643788e-01f,+1.77269548e-01f,
+1.25637949e-01f,+7.05646157e-01f,-6.48001134e-02f,+1.15413137e-01f,+2.96375304e-01f,
-2.00989664e-01f,-2.12714553e-01f,-1.95133150e-01f,+3.05229868e-03f,-1.49754748e-01f,
+1.11972719e-01f,+3.18599701e-01f,+3.23766977e-01f,+2.17680544e-01f,-1.98209226e-01f,
-1.41677484e-01f,-3.02873671e-01f,+1.12172969e-01f,+2.81849623e-01f,+1.85397297e-01f,
+2.01997138e-03f,-1.40514359e-01f,-1.93432733e-01f,+1.72780231e-01f,-2.04105079e-01f,
-2.36460432e-01f,+1.84546441e-01f,-7.89957196e-02f,+1.26519918e-01f,-1.34334445e-01f,
-2.37055108e-01f,-2.02106461e-01f,+1.35717779e-01f,-2.27225408e-01f,-1.45528108e-01f,
+1.60902888e-01f,-2.66058743e-01f,-2.25736126e-01f,+3.46982926e-01f,+1.29540101e-01f,
-2.47516111e-01f,-1.22504346e-01f,-1.90256715e-01f,-1.38018191e-01f,-1.31842792e-01f,
-1.87967017e-01f,+1.15114309e-01f,+3.28454167e-01f,-1.83828056e-01f,-2.53836691e-01f,
-2.26744637e-01f,+2.26132542e-01f,+2.23595247e-01f,+4.83478725e-01f,+2.84882396e-01f,
-1.06590286e-01f,+1.65670469e-01f,-1.24371693e-01f,+1.15266480e-01f,-1.86619520e-01f,
+1.33111551e-01f,+1.11671135e-01f,+3.16696405e-01f,-9.91270319e-02f,+2.31588155e-01f,
-2.20032766e-01f,+1.18680283e-01f,+4.32010770e-01f,+3.14264476e-01f,+1.62204772e-01f,
-1.80628330e-01f,+1.14543840e-01f,+1.39649197e-01f,+1.27981231e-01f,-8.56190398e-02f,
+1.30653933e-01f,+1.27453163e-01f,-2.23987952e-01f,-2.36746386e-01f,-1.53508931e-01f,
-7.19672218e-02f,-2.00713471e-01f,-2.05395862e-01f,+1.45758554e-01f,-2.20395714e-01f,
-7.87101686e-02f,-1.24619110e-02f,-1.82634205e-01f,-8.82303417e-02f,+1.69757560e-01f,
+2.26049110e-01f,-2.06016704e-01f,-1.15533054e-01f,+2.28695437e-01f,+4.61796016e-01f,
+1.22109905e-01f,-2.29129079e-03f,+1.87122568e-01f,+4.63146895e-01f,-1.60259396e-01f,
+2.79488474e-01f,+4.31579119e-03f,+3.85987818e-01f,-6.87205493e-02f,-4.68976647e-02f,
+5.98586857e-01f,-2.24315822e-01f,-8.15188661e-02f,+1.46825746e-01f,-1.99663788e-01f,
-1.79178849e-01f,-2.45462358e-01f,-2.33831406e-01f,}; 
k2c_tensor dense_62_kernel = {&dense_62_kernel_array[0],2,128,{  1,128,  1,  1,  1}}; 
float dense_62_bias_array[128] = {
-8.84334445e-02f,-3.07489663e-01f,-6.29560277e-02f,+6.50539517e-01f,+1.33545309e-01f,
+1.52424946e-01f,-1.01900466e-01f,-3.66895311e-02f,-1.04795456e-01f,-4.09706265e-01f,
+1.73196152e-01f,-4.92494702e-01f,-7.52562881e-02f,+1.47124678e-01f,-1.10096805e-01f,
+1.38794139e-01f,+1.41030744e-01f,+8.25052261e-02f,+1.29606679e-01f,-1.74677908e-01f,
-3.10268879e-01f,-3.04631323e-01f,+2.47775286e-01f,-1.91353336e-02f,+1.43719524e-01f,
+1.26928285e-01f,-6.35620654e-02f,-1.73832595e-01f,+2.82161415e-01f,+1.68650404e-01f,
+1.38841659e-01f,-4.84935522e-01f,+1.23741485e-01f,-9.44715142e-02f,+2.39701301e-01f,
-2.05146633e-02f,+1.45790815e-01f,-3.07131618e-01f,+2.23400459e-01f,+1.79362938e-01f,
-3.67423922e-01f,-1.24312341e-01f,+9.74046290e-02f,+1.65382117e-01f,+1.38748363e-01f,
-3.76483053e-01f,+2.53175646e-01f,+1.50437459e-01f,-3.21595579e-01f,+1.43480867e-01f,
-1.12137020e-01f,-4.25921410e-01f,-3.22039276e-01f,-9.00768697e-01f,+1.67489722e-01f,
-3.94263685e-01f,+1.28950775e-01f,+2.01415643e-01f,+1.47290647e-01f,+1.41599864e-01f,
+1.99879929e-01f,+1.30784720e-01f,-4.19962704e-02f,+1.76121771e-01f,-4.05212969e-01f,
-3.25927705e-01f,-1.17763050e-01f,-1.53154016e-01f,+4.81851399e-02f,-1.92657754e-01f,
+1.22512124e-01f,-1.12005152e-01f,+1.31771624e-01f,+1.29488602e-01f,+2.28255913e-01f,
+1.47177890e-01f,+1.23363771e-01f,-5.53755760e-02f,+1.16152100e-01f,+8.19376856e-02f,
-3.37305635e-01f,+1.33308277e-01f,+2.10630409e-02f,-1.89547688e-01f,+2.09723428e-01f,
+2.28851140e-01f,+1.28217965e-01f,+1.24497525e-01f,+1.41866699e-01f,+1.00249670e-01f,
+1.45870388e-01f,+1.41334519e-01f,-2.95659542e-01f,-3.64928186e-01f,+1.44861743e-01f,
+9.05871764e-02f,+1.70339733e-01f,-3.02078217e-01f,+1.30947292e-01f,+2.33962566e-01f,
+9.63536277e-02f,-3.06863002e-02f,-2.72324383e-01f,+1.04588740e-01f,-1.14539370e-01f,
-1.03400789e-01f,-3.03287774e-01f,+1.23446293e-01f,-1.15020655e-01f,+1.33971453e-01f,
+1.37559876e-01f,-1.90753825e-02f,+1.58120945e-01f,-1.17018557e+00f,+1.50178999e-01f,
-7.52367675e-02f,-1.71927921e-02f,-8.84515792e-03f,+8.74527022e-02f,+9.07828659e-02f,
-1.33996356e+00f,-3.54065895e-01f,+9.77063850e-02f,+1.31883413e-01f,-2.80900568e-01f,
+2.24406838e-01f,-3.93149614e-01f,-2.88176447e-01f,}; 
k2c_tensor dense_62_bias = {&dense_62_bias_array[0],1,128,{128,  1,  1,  1,  1}}; 
float dense_62_fwork[129] = {0}; 

 
float dense_63_kernel_array[128] = {
-1.94903210e-01f,+2.65639931e-01f,+3.70600186e-02f,+6.94778502e-01f,+2.66184628e-01f,
-2.30207101e-01f,-2.44108960e-01f,-3.19180816e-01f,-2.70381451e-01f,+3.14034343e-01f,
-9.50544029e-02f,+5.02801657e-01f,-3.29920530e-01f,-3.65843736e-02f,-2.79522568e-01f,
+2.36250550e-01f,-1.84093341e-01f,-2.51169950e-01f,+3.26179534e-01f,-1.63887575e-01f,
+4.21340525e-01f,+3.19747388e-01f,-9.25885066e-02f,+7.73030221e-02f,-2.02756271e-01f,
+3.86834204e-01f,-1.69124350e-01f,-1.55214012e-01f,+2.29394406e-01f,-2.40617052e-01f,
-2.31289133e-01f,+3.64244431e-01f,+3.47110152e-01f,-1.85286224e-01f,+1.41649246e-01f,
+7.99745545e-02f,-1.71947032e-01f,+6.92463636e-01f,+2.15590909e-01f,-1.27647653e-01f,
+2.16285020e-01f,-2.29804352e-01f,-2.00319096e-01f,+2.78857142e-01f,-2.26031452e-01f,
+3.46771330e-01f,-7.47374147e-02f,+2.03307375e-01f,+2.50211537e-01f,-1.77804694e-01f,
-2.73245871e-01f,+3.43739122e-01f,+2.58378834e-01f,+1.89509249e+00f,+2.79233754e-01f,
+3.12268972e-01f,-2.34684870e-01f,-7.69584104e-02f,-1.17026575e-01f,-1.17531702e-01f,
-7.75709301e-02f,+3.59306216e-01f,-2.66866833e-01f,-9.33157802e-02f,+2.85240769e-01f,
+2.59516805e-01f,-2.02132031e-01f,-1.97026730e-01f,-1.67995349e-01f,-1.74389586e-01f,
-1.65820688e-01f,-2.71333367e-01f,-1.74909458e-01f,+2.99428284e-01f,-7.50846043e-02f,
+2.04217359e-01f,+3.39461565e-01f,-2.30399087e-01f,-1.75791129e-01f,-3.32396120e-01f,
+3.18793505e-01f,+3.26126009e-01f,-1.73415422e-01f,-1.61124945e-01f,+2.56073475e-01f,
-6.24450147e-02f,+2.91768342e-01f,+3.05516303e-01f,+2.26968899e-01f,-2.88919270e-01f,
+2.28020653e-01f,+2.29106411e-01f,+3.32095444e-01f,+1.64206311e-01f,-2.15633944e-01f,
-1.92646474e-01f,-2.17456430e-01f,+3.49035710e-01f,+3.11009765e-01f,-6.70210123e-02f,
-2.16523901e-01f,+1.54271647e-01f,+4.74719852e-01f,-2.16614813e-01f,-2.62520432e-01f,
-2.92535633e-01f,+3.46271813e-01f,-1.80713147e-01f,-2.06011534e-01f,-2.19914928e-01f,
+2.89155930e-01f,-4.11614450e-03f,+1.84077322e-01f,+1.84190404e+00f,-1.85402766e-01f,
-3.02279204e-01f,+1.71141028e-01f,-2.04519153e-01f,-2.17237189e-01f,+2.76128769e-01f,
+1.65747821e+00f,+3.72299612e-01f,-2.48271927e-01f,+2.63444096e-01f,+3.86213571e-01f,
-7.90534392e-02f,+1.88567415e-01f,+1.23188145e-01f,}; 
k2c_tensor dense_63_kernel = {&dense_63_kernel_array[0],2,128,{128,  1,  1,  1,  1}}; 
float dense_63_bias_array[1] = {
-9.23995525e-02f,}; 
k2c_tensor dense_63_bias = {&dense_63_bias_array[0],1,1,{1,1,1,1,1}}; 
float dense_63_fwork[256] = {0}; 

 
k2c_dense(&dense_62_output,dense_62_input_input,&dense_62_kernel, 
	&dense_62_bias,k2c_relu,dense_62_fwork); 
k2c_dense(dense_63_output,&dense_62_output,&dense_63_kernel, 
	&dense_63_bias,k2c_linear,dense_63_fwork); 

 } 

void poly_128_initialize() { 

} 

void poly_128_terminate() { 

} 

