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
  {0.22559592127799987793f, 0.18744812905788421631f, 0.34043607115745544434f, 0.074446454644203186035f, 0.049560971558094024658f, 0.11618311703205108643f, 0.16549001634120941162f, 0.79437124729156494141f},
  {-0.14312529563903808594f, 0.22679194808006286621f, 0.27949944138526916504f, 0.16534361243247985840f, -0.077482812106609344482f, -0.39089080691337585449f, -0.070299625396728515625f, -0.14242066442966461182f},
  {0.12516580522060394287f, -0.0062289461493492126465f, -0.28002730011940002441f, 0.031009126454591751099f, -0.041115742176771163940f, 0.81471431255340576172f, -0.36123207211494445801f, 0.014584224671125411987f},
  {0.28646874427795410156f, -0.13478317856788635254f, 0.32639014720916748047f, 0.27646890282630920410f, -0.19130297005176544189f, -0.16011658310890197754f, 0.43665456771850585938f, 0.030138486996293067932f},
  {0.20227696001529693604f, -0.19678996503353118896f, -0.19853273034095764160f, 0.19562216103076934814f, 0.18537862598896026611f, -0.38659814000129699707f, 0.40386503934860229492f, 0.023296233266592025757f},
  {0.41992598772048950195f, 0.37100797891616821289f, -0.32800894975662231445f, 0.40214848518371582031f, 0.95040529966354370117f, -0.17292962968349456787f, 0.37446495890617370605f, -0.21612182259559631348f},
  {-0.19376149773597717285f, -0.20041280984878540039f, 0.21878316998481750488f, 0.22224941849708557129f, 0.16461786627769470215f, -0.20548853278160095215f, -0.22240218520164489746f, -0.22811597585678100586f},
  {0.16324996948242187500f, -0.24140076339244842529f, 0.16913171112537384033f, 0.17179340124130249023f, -0.12997505068778991699f, 0.27833846211433410645f, -0.42998811602592468262f, 0.058736961334943771362f}
};
static const float tensor__1_Constant_1_output_0[8] = 
{0.28799659013748168945f, 0.083164863288402557373f, 0.48771059513092041016f, 0.33831381797790527344f, -0.035731088370084762573f, 0.46904754638671875000f, -0.0017455458873882889748f, -0.39090123772621154785f};
static const float tensor__1_Constant_2_output_0[8][8] = 
{
  {0.24640740454196929932f, 0.20474043488502502441f, 0.37184169888496398926f, 0.081314228475093841553f, 0.054133031517267227173f, 0.12690114974975585938f, 0.18075667321681976318f, 0.86765295267105102539f},
  {-0.23820200562477111816f, 0.37744757533073425293f, 0.46516814827919006348f, 0.27517974376678466797f, -0.12895387411117553711f, -0.65055567026138305664f, -0.11699897050857543945f, -0.23702929913997650146f},
  {0.099077716469764709473f, -0.0049306578002870082855f, -0.22166170179843902588f, 0.024545948952436447144f, -0.032546058297157287598f, 0.64490485191345214844f, -0.28594109416007995605f, 0.011544460430741310120f},
  {0.39136606454849243164f, -0.18413724005222320557f, 0.44590565562248229980f, 0.37770456075668334961f, -0.26135310530662536621f, -0.21874706447124481201f, 0.59654599428176879883f, 0.041174408048391342163f},
  {0.21714441478252410889f, -0.21125413477420806885f, -0.21312499046325683594f, 0.21000048518180847168f, 0.19900405406951904297f, -0.41501331329345703125f, 0.43354931473731994629f, 0.025008518248796463013f},
  {0.10805453360080718994f, 0.095467045903205871582f, -0.084402620792388916016f, 0.10348006337881088257f, 0.24455644190311431885f, -0.044497914612293243408f, 0.096356593072414398193f, -0.055612046271562576294f},
  {-0.41653314232826232910f, -0.43083161115646362305f, 0.47032275795936584473f, 0.47777423262596130371f, 0.35388246178627014160f, -0.44174298644065856934f, -0.47810262441635131836f, -0.49038568139076232910f},
  {0.28579083085060119629f, -0.42260423302650451660f, 0.29608762264251708984f, 0.30074724555015563965f, -0.22753866016864776611f, 0.48726859688758850098f, -0.75275152921676635742f, 0.10282688587903976440f}
};
static const float tensor__2_Constant_output_0[8][8] = 
{
  {0.39398565888404846191f, -0.29689425230026245117f, -0.55358761548995971680f, 0.12374831736087799072f, -0.11231359094381332397f, 0.41562786698341369629f, -0.012526119127869606018f, 0.20569796860218048096f},
  {-0.26806488633155822754f, -0.25141119956970214844f, 0.33461424708366394043f, -0.26493027806282043457f, 0.0047645093873143196106f, 0.059566855430603027344f, -0.085652105510234832764f, 0.061562128365039825439f},
  {-0.51178812980651855469f, -0.37513825297355651855f, -0.43358042836189270020f, 0.32405295968055725098f, 0.11016689240932464600f, -0.16477468609809875488f, -0.28194341063499450684f, -0.055653449147939682007f},
  {-0.19877573847770690918f, 0.42928737401962280273f, 0.17781305313110351562f, 0.39961177110671997070f, 0.26236587762832641602f, -0.41227820515632629395f, -0.19375254213809967041f, 0.62354093790054321289f},
  {-0.20057432353496551514f, -0.48865431547164916992f, -0.52501308917999267578f, -0.41658434271812438965f, -0.087640330195426940918f, 0.12874360382556915283f, 0.73120498657226562500f, 1.4410228729248046875f},
  {0.35821509361267089844f, 0.26239681243896484375f, 0.34825882315635681152f, -0.030234994366765022278f, -0.14741086959838867188f, 0.12407387048006057739f, 0.30432286858558654785f, -0.086491651833057403564f},
  {-0.32349732518196105957f, -0.23933915793895721436f, -0.25880220532417297363f, -0.35232657194137573242f, -0.38038188219070434570f, -0.35965248942375183105f, 0.17851267755031585693f, 0.15857250988483428955f},
  {0.21437881886959075928f, -0.25968384742736816406f, 0.12638275325298309326f, -0.058772530406713485718f, -0.35074126720428466797f, -0.71739017963409423828f, -0.024571951478719711304f, -0.045692197978496551514f}
};
static const float tensor__2_Constant_1_output_0[8] = 
{-0.88159477710723876953f, 0.34880593419075012207f, 0.38845002651214599609f, 0.27391389012336730957f, 0.10109471529722213745f, 0.39939278364181518555f, -0.25627300143241882324f, 0.43807613849639892578f};
static const float tensor__2_Constant_2_output_0[8][8] = 
{
  {0.35321688652038574219f, -0.26617228984832763672f, -0.49630358815193176270f, 0.11094311624765396118f, -0.10069163143634796143f, 0.37261962890625000000f, -0.011229944415390491486f, 0.18441280722618103027f},
  {-0.41618207097053527832f, -0.39032652974128723145f, 0.51950275897979736328f, -0.41131547093391418457f, 0.0073971026577055454254f, 0.092480063438415527344f, -0.13297851383686065674f, 0.095577813684940338135f},
  {-0.41932386159896850586f, -0.30736240744590759277f, -0.35524588823318481445f, 0.26550662517547607422f, 0.090263150632381439209f, -0.13500501215457916260f, -0.23100496828556060791f, -0.045598596334457397461f},
  {-0.21227413415908813477f, 0.45843929052352905273f, 0.18988792598247528076f, 0.42674848437309265137f, 0.28018254041671752930f, -0.44027507305145263672f, -0.20690983533859252930f, 0.66588413715362548828f},
  {-0.017378259450197219849f, -0.042338229715824127197f, -0.045488443225622177124f, -0.036093905568122863770f, -0.0075933770276606082916f, 0.011154667474329471588f, 0.063353426754474639893f, 0.12485381960868835449f},
  {0.48904439806938171387f, 0.35823082923889160156f, 0.47545185685157775879f, -0.041277587413787841797f, -0.20124909281730651855f, 0.16938881576061248779f, 0.41546934843063354492f, -0.11808061599731445312f},
  {-0.22251130640506744385f, -0.16462476551532745361f, -0.17801204323768615723f, -0.24234093725681304932f, -0.26163825392723083496f, -0.24737992882728576660f, 0.12278645485639572144f, 0.10907100141048431396f},
  {0.46953782439231872559f, -0.56876599788665771484f, 0.27680665254592895508f, -0.12872505187988281250f, -0.76820224523544311523f, -1.5712457895278930664f, -0.053818099200725555420f, -0.10007619112730026245f}
};
static const float tensor__3_Constant_output_0[1][8] = 
{
  {0.26787668466567993164f, 0.39205300807952880859f, 0.26278948783874511719f, 0.28540176153182983398f, 0.60317939519882202148f, -0.11435976624488830566f, 0.47581690549850463867f, -0.14393986761569976807f}
};
static const float tensor__3_Constant_1_output_0[1] = 
{0.047726850956678390503f};
static const int64_t tensor__0_Reshape_1_output_0[4] = 
{0, 0, 0, 4};
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


static inline void node__0_Pad( const float data[1][4], const int64_t pads[4], const float constant_value[1], float output[1][8] )
{
	/* Pad: 
	 * pad at start: 0 0 
	 * pad at end:   0 4 
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
			else if( o1 < 4){
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


void entry(const float tensor_onnx__Pad_0[1][4], float tensor_43[1][1]) {
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