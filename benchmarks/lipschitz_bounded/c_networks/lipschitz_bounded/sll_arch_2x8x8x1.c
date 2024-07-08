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

static const float tensor__0_Constant_8_output_0[1] = 
{0.0000000000000000000f};
static const float tensor__1_Constant_output_0[8][8] = 
{
  {-0.14290587604045867920f, 0.11986648291349411011f, -0.29268240928649902344f, 0.50844794511795043945f, 0.044562429189682006836f, 0.34901288151741027832f, -0.36504474282264709473f, 0.011581388302147388458f},
  {0.34723025560379028320f, -0.30110788345336914062f, 0.43487265706062316895f, -0.10158956050872802734f, 0.15994404256343841553f, -0.31513437628746032715f, -0.093368157744407653809f, -0.82306730747222900391f},
  {0.21210867166519165039f, -0.17702944576740264893f, -0.098783329129219055176f, -0.076024867594242095947f, 0.13071620464324951172f, 0.44066387414932250977f, 0.27173057198524475098f, -0.063214302062988281250f},
  {0.14209322631359100342f, 0.23624722659587860107f, 0.40892502665519714355f, 0.43306717276573181152f, -0.35918867588043212891f, 0.017265889793634414673f, 0.46786591410636901855f, 0.040051139891147613525f},
  {-0.36688026785850524902f, 0.23442377150058746338f, -0.39723145961761474609f, 0.35468861460685729980f, -0.20446433126926422119f, 0.25921407341957092285f, -0.077165327966213226318f, -0.62501400709152221680f},
  {-0.031160527840256690979f, -0.42060175538063049316f, 0.013146727345883846283f, -0.015388065017759799957f, -0.46813952922821044922f, 0.078076250851154327393f, -0.14181596040725708008f, 0.044282343238592147827f},
  {0.28110763430595397949f, 0.38626697659492492676f, -0.086731627583503723145f, -0.36968058347702026367f, -0.24852162599563598633f, 0.17656882107257843018f, -0.29212737083435058594f, -0.11002323776483535767f},
  {0.23111763596534729004f, -0.27935722470283508301f, -0.30499207973480224609f, 0.11440104246139526367f, -0.36860737204551696777f, -0.23288883268833160400f, -0.045573521405458450317f, 0.046927109360694885254f}
};
static const float tensor__1_Constant_1_output_0[8] = 
{-0.084924459457397460938f, -1.2340986728668212891f, 0.66607713699340820312f, 0.44378614425659179688f, -0.45232260227203369141f, -0.49295595288276672363f, -0.48403659462928771973f, -0.15477105975151062012f};
static const float tensor__1_Constant_2_output_0[8][8] = 
{
  {-0.12442288547754287720f, 0.10436332970857620239f, -0.25482779741287231445f, 0.44268688559532165527f, 0.038798864930868148804f, 0.30387267470359802246f, -0.31783100962638854980f, 0.010083488188683986664f},
  {0.46379950642585754395f, -0.40219333767890930176f, 0.58086448907852172852f, -0.13569436967372894287f, 0.21363912522792816162f, -0.42092868685722351074f, -0.12471294403076171875f, -1.0993806123733520508f},
  {1.0098093748092651367f, -0.84280377626419067383f, -0.47028878331184387207f, -0.36194005608558654785f, 0.62231516838073730469f, 2.0979175567626953125f, 1.2936580181121826172f, -0.30095136165618896484f},
  {0.24426099658012390137f, 0.40611353516578674316f, 0.70295000076293945312f, 0.74445080757141113281f, -0.61745226383209228516f, 0.029680397361516952515f, 0.80427050590515136719f, 0.068848684430122375488f},
  {-0.57487487792968750000f, 0.36732512712478637695f, -0.62243300676345825195f, 0.55577147006988525391f, -0.32038083672523498535f, 0.40616974234580993652f, -0.12091249972581863403f, -0.97935181856155395508f},
  {-0.12909795343875885010f, -1.7425515651702880859f, 0.054466843605041503906f, -0.063752695918083190918f, -1.9395003318786621094f, 0.32346960902214050293f, -0.58754301071166992188f, 0.18346159160137176514f},
  {0.81226378679275512695f, 1.1161229610443115234f, -0.25061205029487609863f, -1.0681962966918945312f, -0.71810609102249145508f, 0.51019763946533203125f, -0.84410542249679565430f, -0.31791341304779052734f},
  {0.25701084733009338379f, -0.31065496802330017090f, -0.33916181325912475586f, 0.12721793353557586670f, -0.40990421175956726074f, -0.25898048281669616699f, -0.050679340958595275879f, 0.052184578031301498413f}
};
static const float tensor__2_Constant_output_0[8][8] = 
{
  {-0.24485285580158233643f, 0.22422912716865539551f, -0.0012688314309343695641f, 0.047604598104953765869f, -0.11794234812259674072f, 0.83691632747650146484f, 0.046117834746837615967f, 0.45483538508415222168f},
  {-0.040074639022350311279f, 0.067856699228286743164f, -0.091939754784107208252f, 0.060777295380830764771f, 0.0030502425506711006165f, -0.071781516075134277344f, -0.024291427806019783020f, 0.075062587857246398926f},
  {0.82549482583999633789f, -0.10192299634218215942f, 0.077156171202659606934f, 0.087750144302845001221f, 0.57070249319076538086f, -0.22938095033168792725f, 0.66196954250335693359f, 0.52932530641555786133f},
  {-0.50586569309234619141f, 0.30412802100181579590f, 0.15587133169174194336f, -0.39510488510131835938f, 0.43240308761596679688f, -0.12973093986511230469f, 0.34313961863517761230f, -0.063369996845722198486f},
  {-0.053498767316341400146f, -0.0063615925610065460205f, -0.44064432382583618164f, 0.021737348288297653198f, 0.17926166951656341553f, -0.10368067026138305664f, -0.081386022269725799561f, 0.21977348625659942627f},
  {0.046387605369091033936f, 0.10578854382038116455f, -0.14767740666866302490f, 0.0027074096724390983582f, -0.11474923789501190186f, 0.058322086930274963379f, 0.18810467422008514404f, -0.13044272363185882568f},
  {-0.18511626124382019043f, -0.25394141674041748047f, 0.056040950119495391846f, -0.14369371533393859863f, -0.37831896543502807617f, -0.12189206480979919434f, 0.24855816364288330078f, 0.29838418960571289062f},
  {-0.57904553413391113281f, -0.13692656159400939941f, 0.18150097131729125977f, 0.45746102929115295410f, 0.37207311391830444336f, 0.018651185557246208191f, 0.45060020685195922852f, -0.18281491100788116455f}
};
static const float tensor__2_Constant_1_output_0[8] = 
{0.73536056280136108398f, -0.35952967405319213867f, 0.40878498554229736328f, -0.00070676585892215371132f, 0.57179409265518188477f, 0.32367792725563049316f, -0.48417553305625915527f, -0.34092080593109130859f};
static const float tensor__2_Constant_2_output_0[8][8] = 
{
  {-0.32801786065101623535f, 0.30038923025131225586f, -0.0016997938510030508041f, 0.063773646950721740723f, -0.15800182521343231201f, 1.1211774349212646484f, 0.061781898140907287598f, 0.60932159423828125000f},
  {-1.0951085090637207031f, 1.8543010950088500977f, -2.5124120712280273438f, 1.6608442068099975586f, 0.083353124558925628662f, -1.9615534543991088867f, -0.66380506753921508789f, 2.0512144565582275391f},
  {0.76170873641967773438f, -0.094047389924526214600f, 0.071194298565387725830f, 0.080969676375389099121f, 0.52660423517227172852f, -0.21165664494037628174f, 0.61081904172897338867f, 0.48842427134513854980f},
  {-0.73514282703399658203f, 0.44197013974189758301f, 0.22651802003383636475f, -0.57418107986450195312f, 0.62838423252105712891f, -0.18852981925010681152f, 0.49866324663162231445f, -0.092091634869575500488f},
  {-0.093827866017818450928f, -0.011157167144119739532f, -0.77281624078750610352f, 0.038123663514852523804f, 0.31439492106437683105f, -0.18183851242065429688f, -0.14273743331432342529f, 0.38544583320617675781f},
  {0.81080186367034912109f, 1.8490618467330932617f, -2.5812308788299560547f, 0.047322399914264678955f, -2.0056843757629394531f, 1.0194028615951538086f, 3.2878530025482177734f, -2.2799885272979736328f},
  {-0.79279130697250366211f, -1.0875465869903564453f, 0.24000473320484161377f, -0.61539232730865478516f, -1.6202142238616943359f, -0.52202314138412475586f, 1.0644918680191040039f, 1.2778801918029785156f},
  {-0.84921258687973022461f, -0.20081281661987304688f, 0.26618444919586181641f, 0.67090004682540893555f, 0.54567241668701171875f, 0.027353327721357345581f, 0.66083812713623046875f, -0.26811143755912780762f}
};
static const float tensor__3_Constant_output_0[1][8] = 
{
  {-0.69895756244659423828f, 0.29587706923484802246f, -0.0096341921016573905945f, 0.14396822452545166016f, -0.55280709266662597656f, -0.0015159649774432182312f, 0.28370088338851928711f, 0.13042770326137542725f}
};
static const float tensor__3_Constant_1_output_0[1] = 
{0.19327899813652038574f};
static const int64_t tensor__0_Reshape_1_output_0[4] = 
{0, 0, 0, 6};
union tensor_union_0 {
float tensor__0_Pad_output_0[1][8];
float tensor__2_Gemm_output_0[1][8];
float tensor__2_MatMul_output_0[1][8];
};
static union tensor_union_0 tu0;

union tensor_union_1 {
float tensor__1_Gemm_output_0[1][8];
float tensor__1_MatMul_output_0[1][8];
float tensor__2_activation_Relu_output_0[1][8];
float tensor__2_Sub_output_0[1][8];
};
static union tensor_union_1 tu1;

union tensor_union_2 {
float tensor__1_activation_Relu_output_0[1][8];
float tensor__1_Sub_output_0[1][8];
};
static union tensor_union_2 tu2;


static inline void node__0_Pad( const float data[1][2], const int64_t pads[4], const float constant_value[1], float output[1][8] )
{
	/* Pad: 
	 * pad at start: 0 0 
	 * pad at end:   0 6 
	 * mode: constant
	 */
	uint32_t ir0;
	for( uint32_t o0=0, il0=0; o0<1; o0++ ) {
		bool pad_at_0=false;
		if( o0 < 0){
			pad_at_0= true;
		}
		else if( o0 < 1){
			ir0=il0;
			il0++;
		}
		else {
			pad_at_0= true;
		}
		uint32_t ir1;
		for( uint32_t o1=0, il1=0; o1<8; o1++ ) {
			bool pad_at_1=false;
			if( o1 < 0){
				pad_at_1= true;
			}
			else if( o1 < 2){
				ir1=il1;
				il1++;
			}
			else {
				pad_at_1= true;
			}
	if ( pad_at_0  || pad_at_1)
		output[o0][o1] = 0.0000000000000000000;
	else
		output[o0][o1]= data[ir0][ir1];
		}
	}
}

static inline void node__1_Gemm( const float tensor__0_Pad_output_0[1][8], const float tensor__1_Constant_output_0[8][8], const float tensor__1_Constant_1_output_0[8], float tensor__1_Gemm_output_0[1][8] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 8;
	const int N = 8;
	float (*A)[8]  = (float(*)[8])tensor__0_Pad_output_0;
	float (*Y)[8]  = (float(*)[8])tensor__1_Gemm_output_0;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[8]  = (float(*)[8])tensor__1_Constant_1_output_0;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor__1_Constant_output_0[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}

static inline void node__1_activation_Relu( const float tensor__1_Gemm_output_0[1][8], float tensor__1_activation_Relu_output_0[1][8] )
{
	/*Relu*/
	float *X = (float*)tensor__1_Gemm_output_0;
	float *Y = (float*)tensor__1_activation_Relu_output_0;
	for( uint32_t i=0; i<8; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node__1_MatMul( const float A[1][8], const float B[8][8], float Y[1][8] )
{
	/* MatMul */
	for( uint32_t r=0; r<1; r++ )
		for( uint32_t c=0; c<8; c++ ) {
			Y[r][c] = 0;
			for( uint32_t i=0; i<8; i++ )
				Y[r][c] += A[r][i] * B[i][c];
		}
}

static inline void node__1_Sub( const float tensor__0_Pad_output_0[1][8], const float tensor__1_MatMul_output_0[1][8], float tensor__1_Sub_output_0[1][8] )
{
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<8; i1++) {
		tensor__1_Sub_output_0[i0][i1] = tensor__0_Pad_output_0[0][i1]-tensor__1_MatMul_output_0[0][i1];;
	}
	}
}

static inline void node__2_Gemm( const float tensor__1_Sub_output_0[1][8], const float tensor__2_Constant_output_0[8][8], const float tensor__2_Constant_1_output_0[8], float tensor__2_Gemm_output_0[1][8] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 8;
	const int N = 8;
	float (*A)[8]  = (float(*)[8])tensor__1_Sub_output_0;
	float (*Y)[8]  = (float(*)[8])tensor__2_Gemm_output_0;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[8]  = (float(*)[8])tensor__2_Constant_1_output_0;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor__2_Constant_output_0[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][c] * beta;
			Y[r][c] = tmp;
	}
}

static inline void node__2_activation_Relu( const float tensor__2_Gemm_output_0[1][8], float tensor__2_activation_Relu_output_0[1][8] )
{
	/*Relu*/
	float *X = (float*)tensor__2_Gemm_output_0;
	float *Y = (float*)tensor__2_activation_Relu_output_0;
	for( uint32_t i=0; i<8; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node__2_MatMul( const float A[1][8], const float B[8][8], float Y[1][8] )
{
	/* MatMul */
	for( uint32_t r=0; r<1; r++ )
		for( uint32_t c=0; c<8; c++ ) {
			Y[r][c] = 0;
			for( uint32_t i=0; i<8; i++ )
				Y[r][c] += A[r][i] * B[i][c];
		}
}

static inline void node__2_Sub( const float tensor__1_Sub_output_0[1][8], const float tensor__2_MatMul_output_0[1][8], float tensor__2_Sub_output_0[1][8] )
{
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<8; i1++) {
		tensor__2_Sub_output_0[i0][i1] = tensor__1_Sub_output_0[0][i1]-tensor__2_MatMul_output_0[0][i1];;
	}
	}
}

static inline void node__3_Gemm( const float tensor__2_Sub_output_0[1][8], const float tensor__3_Constant_output_0[1][8], const float tensor__3_Constant_1_output_0[1], float tensor_43[1][1] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 8;
	const int N = 1;
	float (*A)[8]  = (float(*)[8])tensor__2_Sub_output_0;
	float (*Y)[1]  = (float(*)[1])tensor_43;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[1]  = (float(*)[1])tensor__3_Constant_1_output_0;
	for( uint32_t r=0; r<M; r++ )
		for( uint32_t c=0; c<N; c++ ) {
			float ABrc = 0;
			for( uint32_t i=0; i<K; i++ ) {
				float B = tensor__3_Constant_output_0[c][i];
				ABrc += A[r][i] * B;
			}
			float tmp = ABrc * alpha;
			tmp += C[0][0] * beta;
			Y[r][c] = tmp;
	}
}


void entry(const float tensor_onnx__Pad_0[1][2], float tensor_43[1][1]) {
	node__0_Pad( tensor_onnx__Pad_0, tensor__0_Reshape_1_output_0, tensor__0_Constant_8_output_0, tu0.tensor__0_Pad_output_0);
	node__1_Gemm( tu0.tensor__0_Pad_output_0, tensor__1_Constant_output_0, tensor__1_Constant_1_output_0, tu1.tensor__1_Gemm_output_0);
	node__1_activation_Relu( tu1.tensor__1_Gemm_output_0, tu2.tensor__1_activation_Relu_output_0);
	node__1_MatMul( tu2.tensor__1_activation_Relu_output_0, tensor__1_Constant_2_output_0, tu1.tensor__1_MatMul_output_0);
	node__1_Sub( tu0.tensor__0_Pad_output_0, tu1.tensor__1_MatMul_output_0, tu2.tensor__1_Sub_output_0);
	node__2_Gemm( tu2.tensor__1_Sub_output_0, tensor__2_Constant_output_0, tensor__2_Constant_1_output_0, tu0.tensor__2_Gemm_output_0);
	node__2_activation_Relu( tu0.tensor__2_Gemm_output_0, tu1.tensor__2_activation_Relu_output_0);
	node__2_MatMul( tu1.tensor__2_activation_Relu_output_0, tensor__2_Constant_2_output_0, tu0.tensor__2_MatMul_output_0);
	node__2_Sub( tu2.tensor__1_Sub_output_0, tu0.tensor__2_MatMul_output_0, tu1.tensor__2_Sub_output_0);
	node__3_Gemm( tu1.tensor__2_Sub_output_0, tensor__3_Constant_output_0, tensor__3_Constant_1_output_0, tensor_43);
}