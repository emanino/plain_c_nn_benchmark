#include <math.h> 
 #include <string.h> 
#include "../keras2c/k2c_include.h" 
#include "../keras2c/k2c_tensor_include.h" 

 


void poly_4_4_4_4(k2c_tensor* dense_142_input_input, k2c_tensor* dense_146_output) { 

float dense_142_output_array[4] = {0}; 
k2c_tensor dense_142_output = {&dense_142_output_array[0],1,4,{4,1,1,1,1}}; 
float dense_142_kernel_array[4] = {
+5.48384368e-01f,-4.03225034e-01f,-8.22424889e-01f,-4.27254468e-01f,}; 
k2c_tensor dense_142_kernel = {&dense_142_kernel_array[0],2,4,{1,4,1,1,1}}; 
float dense_142_bias_array[4] = {
-1.83425963e-01f,-5.64127147e-01f,-2.63909972e-03f,+1.38429180e-01f,}; 
k2c_tensor dense_142_bias = {&dense_142_bias_array[0],1,4,{4,1,1,1,1}}; 
float dense_142_fwork[5] = {0}; 

 
float dense_143_output_array[4] = {0}; 
k2c_tensor dense_143_output = {&dense_143_output_array[0],1,4,{4,1,1,1,1}}; 
float dense_143_kernel_array[16] = {
+1.00673664e+00f,-7.61665106e-01f,+4.07980233e-01f,-7.73927212e-01f,-4.74753171e-01f,
+8.10176373e-01f,-6.28926933e-01f,-4.90228117e-01f,-6.73344970e-01f,+7.05034435e-01f,
-2.13754833e-01f,-5.77656746e-01f,+5.65441191e-01f,+8.44813704e-01f,-2.20631957e-01f,
+5.02005070e-02f,}; 
k2c_tensor dense_143_kernel = {&dense_143_kernel_array[0],2,16,{4,4,1,1,1}}; 
float dense_143_bias_array[4] = {
-3.09280127e-01f,+2.51817312e-02f,-3.11969161e-01f,-3.33040245e-02f,}; 
k2c_tensor dense_143_bias = {&dense_143_bias_array[0],1,4,{4,1,1,1,1}}; 
float dense_143_fwork[20] = {0}; 

 
float dense_144_output_array[4] = {0}; 
k2c_tensor dense_144_output = {&dense_144_output_array[0],1,4,{4,1,1,1,1}}; 
float dense_144_kernel_array[16] = {
+6.74840510e-01f,+6.94793224e-01f,-3.59081298e-01f,-3.48001540e-01f,+5.16011119e-01f,
+4.63300616e-01f,-2.59678125e-01f,+3.42320442e-01f,+5.48921704e-01f,+1.73599565e+00f,
-9.05150175e-03f,+2.24222004e-01f,-7.66982436e-02f,-8.69250178e-01f,-1.07149012e-01f,
-8.64784658e-01f,}; 
k2c_tensor dense_144_kernel = {&dense_144_kernel_array[0],2,16,{4,4,1,1,1}}; 
float dense_144_bias_array[4] = {
+6.45371899e-02f,-4.72754627e-01f,+6.34315968e-01f,-6.89214885e-01f,}; 
k2c_tensor dense_144_bias = {&dense_144_bias_array[0],1,4,{4,1,1,1,1}}; 
float dense_144_fwork[20] = {0}; 

 
float dense_145_output_array[4] = {0}; 
k2c_tensor dense_145_output = {&dense_145_output_array[0],1,4,{4,1,1,1,1}}; 
float dense_145_kernel_array[16] = {
+2.86102563e-01f,-4.17700142e-01f,+3.88334453e-01f,-7.35441089e-01f,+1.27093971e-01f,
-1.03649139e-01f,-1.51779008e+00f,-9.33827460e-01f,+2.67062396e-01f,+7.76165873e-02f,
+9.01192874e-02f,+1.45604300e+00f,-1.34771085e+00f,-1.18794620e-01f,-2.01229906e+00f,
-3.69390875e-01f,}; 
k2c_tensor dense_145_kernel = {&dense_145_kernel_array[0],2,16,{4,4,1,1,1}}; 
float dense_145_bias_array[4] = {
+2.14367006e-02f,-3.88125442e-02f,+8.55217218e-01f,+4.55977499e-01f,}; 
k2c_tensor dense_145_bias = {&dense_145_bias_array[0],1,4,{4,1,1,1,1}}; 
float dense_145_fwork[20] = {0}; 

 
float dense_146_kernel_array[4] = {
-8.94736111e-01f,-5.19859433e-01f,-1.59474289e+00f,+1.54181862e+00f,}; 
k2c_tensor dense_146_kernel = {&dense_146_kernel_array[0],2,4,{4,1,1,1,1}}; 
float dense_146_bias_array[1] = {
+3.93292487e-01f,}; 
k2c_tensor dense_146_bias = {&dense_146_bias_array[0],1,1,{1,1,1,1,1}}; 
float dense_146_fwork[8] = {0}; 

 
k2c_dense(&dense_142_output,dense_142_input_input,&dense_142_kernel, 
	&dense_142_bias,k2c_relu,dense_142_fwork); 
k2c_dense(&dense_143_output,&dense_142_output,&dense_143_kernel, 
	&dense_143_bias,k2c_relu,dense_143_fwork); 
k2c_dense(&dense_144_output,&dense_143_output,&dense_144_kernel, 
	&dense_144_bias,k2c_relu,dense_144_fwork); 
k2c_dense(&dense_145_output,&dense_144_output,&dense_145_kernel, 
	&dense_145_bias,k2c_relu,dense_145_fwork); 
k2c_dense(dense_146_output,&dense_145_output,&dense_146_kernel, 
	&dense_146_bias,k2c_linear,dense_146_fwork); 

 } 

void poly_4_4_4_4_initialize() { 

} 

void poly_4_4_4_4_terminate() { 

} 

