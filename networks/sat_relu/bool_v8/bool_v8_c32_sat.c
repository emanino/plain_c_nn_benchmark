// This file is computer-generated by onnx2c 
// (TODO: add creating command line here)
// (TODO: print creation date here )

// ONNX model:
// produced by pytorch, version 2.0.1
// ONNX IR version: 14
// Model documentation: 
/*

*/

#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#define MAX(X,Y) ( X > Y ? X : Y)
#define MIN(X,Y) ( X < Y ? X : Y)
#define CLIP(X,L) ( MAX(MIN(X,L), -L) )

static const float tensor_0_weight[48][8] = 
{
  {0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {-1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f},
  {-1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {-1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f},
  {1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f},
  {1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {-1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f},
  {-1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f},
  {0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f},
  {1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f},
  {-1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f},
  {1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f},
  {0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f},
  {2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 2.0000000000000000000f}
};
static const float tensor_0_bias[48] = 
{-1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -2.0000000000000000000f, -4.0000000000000000000f, -1.0000000000000000000f, -4.0000000000000000000f, -1.0000000000000000000f, -2.0000000000000000000f, -2.0000000000000000000f, -1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, -4.0000000000000000000f, 0.0000000000000000000f, -2.0000000000000000000f, -4.0000000000000000000f, 0.0000000000000000000f, -3.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f};
static const float tensor_2_weight[2][48] = 
{
  {-1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f},
  {0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 0.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, 1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f, -1.0000000000000000000f}
};
static const float tensor_2_bias[2] = 
{1.0000000000000000000f, 0.0000000000000000000f};
union tensor_union_0 {
float tensor__0_Gemm_output_0[1][48];
};
static union tensor_union_0 tu0;

union tensor_union_1 {
float tensor__1_Relu_output_0[1][48];
};
static union tensor_union_1 tu1;


static inline void node__0_Gemm( const float tensor_onnx__Gemm_0[1][8], const float tensor_0_weight[48][8], const float tensor_0_bias[48], float tensor__0_Gemm_output_0[1][48] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 8;
	const int N = 48;
	float (*A)[8]  = (float(*)[8])tensor_onnx__Gemm_0;
	float (*Y)[48]  = (float(*)[48])tensor__0_Gemm_output_0;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[48]  = (float(*)[48])tensor_0_bias;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor_0_weight[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}

static inline void node__1_Relu( const float tensor__0_Gemm_output_0[1][48], float tensor__1_Relu_output_0[1][48] )
{
	/*Relu*/
	float *X = (float*)tensor__0_Gemm_output_0;
	float *Y = (float*)tensor__1_Relu_output_0;
	for( uint32_t i=0; i<48; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node__2_Gemm( const float tensor__1_Relu_output_0[1][48], const float tensor_2_weight[2][48], const float tensor_2_bias[2], float tensor_7[1][2] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 48;
	const int N = 2;
	float (*A)[48]  = (float(*)[48])tensor__1_Relu_output_0;
	float (*Y)[2]  = (float(*)[2])tensor_7;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[2]  = (float(*)[2])tensor_2_bias;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor_2_weight[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}


void entry(const float tensor_onnx__Gemm_0[1][8], float tensor_7[1][2]) {
	node__0_Gemm( tensor_onnx__Gemm_0, tensor_0_weight, tensor_0_bias, tu0.tensor__0_Gemm_output_0);
	node__1_Relu( tu0.tensor__0_Gemm_output_0, tu1.tensor__1_Relu_output_0);
	node__2_Gemm( tu1.tensor__1_Relu_output_0, tensor_2_weight, tensor_2_bias, tensor_7);
}
