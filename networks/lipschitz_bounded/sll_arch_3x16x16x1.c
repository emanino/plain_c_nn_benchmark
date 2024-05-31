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
static const float tensor__1_Constant_output_0[16][16] = 
{
  {-0.15681916475296020508f, 0.27384009957313537598f, 0.055079542100429534912f, 0.24036996066570281982f, 0.0017495101783424615860f, 0.38207802176475524902f, -0.046376787126064300537f, 0.020126102492213249207f, 0.35779571533203125000f, 0.12907265126705169678f, -0.14206233620643615723f, 0.15609578788280487061f, 0.16592712700366973877f, -0.22346018254756927490f, -0.18328678607940673828f, 0.13417364656925201416f},
  {0.14333599805831909180f, 0.35263800621032714844f, -0.14642478525638580322f, -0.047443520277738571167f, 0.82774406671524047852f, -0.31994718313217163086f, -0.27942937612533569336f, -0.097578294575214385986f, -0.10714024305343627930f, 0.25004464387893676758f, -0.098617844283580780029f, 0.24005164206027984619f, 0.061933666467666625977f, -0.24952831864356994629f, 0.23213362693786621094f, -0.099702343344688415527f},
  {-0.35363468527793884277f, -0.11173716187477111816f, -0.060343049466609954834f, 0.46146434545516967773f, -0.067448325455188751221f, -0.33607488870620727539f, -0.34589186310768127441f, 0.098275505006313323975f, -0.14537924528121948242f, -0.090463139116764068604f, 0.38753995299339294434f, 0.22573001682758331299f, -0.23632019758224487305f, -0.17335930466651916504f, -0.28669896721839904785f, 0.077840998768806457520f},
  {0.29005274176597595215f, 0.13321307301521301270f, 0.50101155042648315430f, 0.11280024796724319458f, -0.20494921505451202393f, -0.16954180598258972168f, -0.24124231934547424316f, 0.17319469153881072998f, 0.00025848860968835651875f, 0.044205944985151290894f, -0.0038849639240652322769f, 0.13840693235397338867f, 0.38367626070976257324f, 0.14507119357585906982f, -0.095671676099300384521f, -0.16865727305412292480f},
  {0.086625121533870697021f, 0.33197459578514099121f, -0.33533188700675964355f, -0.093592830002307891846f, -0.076246112585067749023f, -0.19553315639495849609f, 0.44495168328285217285f, 0.43166717886924743652f, -0.031894911080598831177f, 0.30923470854759216309f, 0.26794686913490295410f, 0.11802598834037780762f, 0.19894126057624816895f, -0.0048552835360169410706f, -0.36137712001800537109f, -0.43172794580459594727f},
  {0.24106994271278381348f, 0.17361003160476684570f, 0.30607700347900390625f, 0.11545006185770034790f, -0.085835017263889312744f, -0.23251862823963165283f, 0.00088810839224606752396f, -0.29843387007713317871f, -0.089184693992137908936f, 0.30029106140136718750f, 0.065716311335563659668f, 0.19894072413444519043f, 0.10357595980167388916f, -0.0075651248916983604431f, 0.074668720364570617676f, 0.045276518911123275757f},
  {-0.076995648443698883057f, -0.21722318232059478760f, -0.027096891775727272034f, -0.11001879721879959106f, 0.10096836090087890625f, 0.0065083247609436511993f, -0.025993676856160163879f, 0.064803421497344970703f, -0.16498944163322448730f, -0.10203989595174789429f, -0.092603482306003570557f, 0.071906052529811859131f, -0.14488196372985839844f, 0.14471153914928436279f, 0.12909510731697082520f, 0.076984323561191558838f},
  {0.037211760878562927246f, -0.17538571357727050781f, -0.31029218435287475586f, 0.35388541221618652344f, 0.072412356734275817871f, 0.13533674180507659912f, -0.25265756249427795410f, -0.25008600950241088867f, 0.018190706148743629456f, 0.27804973721504211426f, -0.059221681207418441772f, -0.067017510533332824707f, 0.027839165180921554565f, 0.51203405857086181641f, -0.17198973894119262695f, -0.25559332966804504395f},
  {-0.16534981131553649902f, 0.012518636882305145264f, -0.20176860690116882324f, -0.24750727415084838867f, -0.13582883775234222412f, 0.040066052228212356567f, 0.099961161613464355469f, 0.041561584919691085815f, -0.12240232527256011963f, 0.087141364812850952148f, 0.0041588204912841320038f, 0.42246830463409423828f, 0.053869266062974929810f, -0.018324678763747215271f, -0.21610784530639648438f, -0.41398480534553527832f},
  {0.48325663805007934570f, -0.34121882915496826172f, -0.21693508327007293701f, -0.00053558754734694957733f, -0.039871741086244583130f, 0.44210433959960937500f, -0.28999131917953491211f, 0.43087306618690490723f, -0.21152786910533905029f, 0.024151613935828208923f, 0.35539683699607849121f, 0.067136920988559722900f, -0.064934223890304565430f, -0.21481110155582427979f, 0.35953548550605773926f, -0.11204745620489120483f},
  {-0.21084384620189666748f, -0.18433994054794311523f, 0.26744210720062255859f, -0.21919544041156768799f, 0.35570356249809265137f, 0.16093969345092773438f, -0.041393306106328964233f, 0.029770528897643089294f, 0.16604731976985931396f, -0.012758224271237850189f, 0.35375306010246276855f, -0.16883333027362823486f, 0.10108910501003265381f, 0.047310598194599151611f, -0.17648340761661529541f, -0.14692780375480651855f},
  {0.21185722947120666504f, 0.20838908851146697998f, 0.32662677764892578125f, 0.17951309680938720703f, -0.021728267893195152283f, -0.12513950467109680176f, -0.074630632996559143066f, 0.19589461386203765869f, 0.40245267748832702637f, -0.21988189220428466797f, 0.024322716519236564636f, 0.15434293448925018311f, -0.27104631066322326660f, 0.26345217227935791016f, 0.18063804507255554199f, -0.32129085063934326172f},
  {-0.25968044996261596680f, 0.23215407133102416992f, 0.23880162835121154785f, 0.16570289433002471924f, -0.029318587854504585266f, 0.18173041939735412598f, -0.0037997995968908071518f, 0.089562579989433288574f, -0.40268346667289733887f, 0.12224367260932922363f, -0.11216065287590026855f, -0.27140614390373229980f, -0.12972331047058105469f, -0.062067449092864990234f, 0.14094759523868560791f, -0.29086261987686157227f},
  {0.31351581215858459473f, 0.15745416283607482910f, -0.31825116276741027832f, 0.20012126863002777100f, -0.077255614101886749268f, -0.047327976673841476440f, 0.078728638589382171631f, -0.20004299283027648926f, 0.084992624819278717041f, -0.20047621428966522217f, 0.28007674217224121094f, -0.38193583488464355469f, 0.24214302003383636475f, -0.40030449628829956055f, -0.11954038590192794800f, -0.41765978932380676270f},
  {-0.41246154904365539551f, 0.29677328467369079590f, -0.27859085798263549805f, 0.031174112111330032349f, -0.20761565864086151123f, 0.25150942802429199219f, 0.35096412897109985352f, -0.21091984212398529053f, -0.0045421393588185310364f, -0.052251957356929779053f, 0.70589226484298706055f, 0.055898055434226989746f, 0.15785744786262512207f, 0.37035861611366271973f, 0.48774471879005432129f, 0.24796874821186065674f},
  {0.30519726872444152832f, -0.33398374915122985840f, 0.061657134443521499634f, 0.24439963698387145996f, 0.045281916856765747070f, 0.30205577611923217773f, -0.077654875814914703369f, 0.38750016689300537109f, -0.23887474834918975830f, -0.035229202359914779663f, 0.15057453513145446777f, 0.25567331910133361816f, 0.35803145170211791992f, -0.071725077927112579346f, 0.27105435729026794434f, -0.037406213581562042236f}
};
static const float tensor__1_Constant_1_output_0[16] = 
{0.098490238189697265625f, -0.28503113985061645508f, -0.42233765125274658203f, 0.38339191675186157227f, -0.15926977992057800293f, -0.31017526984214782715f, 0.41240301728248596191f, -0.25478497147560119629f, -0.31015452742576599121f, -0.27042865753173828125f, -0.38912883400917053223f, -0.019523032009601593018f, 0.11032877117395401001f, -0.13848406076431274414f, 0.46772804856300354004f, -0.049592785537242889404f};
static const float tensor__1_Constant_2_output_0[16][16] = 
{
  {-0.40194773674011230469f, 0.70188748836517333984f, 0.14117597043514251709f, 0.61609917879104614258f, 0.0044842204079031944275f, 0.97931522130966186523f, -0.11886968463659286499f, 0.051585797220468521118f, 0.91707652807235717773f, 0.33082985877990722656f, -0.36412408947944641113f, 0.40009364485740661621f, 0.42529261112213134766f, -0.57275724411010742188f, -0.46978765726089477539f, 0.34390434622764587402f},
  {0.14996854960918426514f, 0.36895555257797241211f, -0.15320026874542236328f, -0.049638863652944564819f, 0.86604607105255126953f, -0.33475202322006225586f, -0.29235935211181640625f, -0.10209351032972335815f, -0.11209791898727416992f, 0.26161488890647888184f, -0.10318116098642349243f, 0.25115948915481567383f, 0.064799509942531585693f, -0.26107469201087951660f, 0.24287508428096771240f, -0.10431584715843200684f},
  {-0.63166826963424682617f, -0.19958680868148803711f, -0.10778577625751495361f, 0.82427543401718139648f, -0.12047734111547470093f, -0.60030269622802734375f, -0.61783790588378906250f, 0.17554137110710144043f, -0.25967887043952941895f, -0.16158679127693176270f, 0.69223046302795410156f, 0.40320280194282531738f, -0.42211914062500000000f, -0.30965733528137207031f, -0.51210653781890869141f, 0.13904091715812683105f},
  {0.13474941253662109375f, 0.061886616051197052002f, 0.23275426030158996582f, 0.052403457462787628174f, -0.095212981104850769043f, -0.078763805329799652100f, -0.11207361519336700439f, 0.080460824072360992432f, 0.00012008570047328248620f, 0.020536696538329124451f, -0.0018048323690891265869f, 0.064299523830413818359f, 0.17824396491050720215f, 0.067395530641078948975f, -0.044446062296628952026f, -0.078352883458137512207f},
  {0.056442331522703170776f, 0.21630468964576721191f, -0.21849220991134643555f, -0.060982283204793930054f, -0.049679681658744812012f, -0.12740354239940643311f, 0.28991717100143432617f, 0.28126138448715209961f, -0.020781768485903739929f, 0.20148806273937225342f, 0.17458614706993103027f, 0.076902195811271667480f, 0.12962415814399719238f, -0.0031635572668164968491f, -0.23546250164508819580f, -0.28130099177360534668f},
  {0.28434288501739501953f, 0.20477366447448730469f, 0.36101895570755004883f, 0.13617376983165740967f, -0.10124272108078002930f, -0.27425658702850341797f, 0.0010475270682945847511f, -0.35200384259223937988f, -0.10519367456436157227f, 0.35419440269470214844f, 0.077512629330158233643f, 0.23465131223201751709f, 0.12216822803020477295f, -0.0089230928570032119751f, 0.088072031736373901367f, 0.053403820842504501343f},
  {-0.11639809608459472656f, -0.32838693261146545410f, -0.040963698178529739380f, -0.16632081568241119385f, 0.15263882279396057129f, 0.0098389536142349243164f, -0.039295915514230728149f, 0.097966507077217102051f, -0.24942262470722198486f, -0.15425871312618255615f, -0.13999322056770324707f, 0.10870390385389328003f, -0.21902516484260559082f, 0.21876752376556396484f, 0.19515940546989440918f, 0.11638097465038299561f},
  {0.072398446500301361084f, -0.34122687578201293945f, -0.60369813442230224609f, 0.68851226568222045898f, 0.14088401198387145996f, 0.26330840587615966797f, -0.49156540632247924805f, -0.48656225204467773438f, 0.035391468554735183716f, 0.54096788167953491211f, -0.11522049456834793091f, -0.13038790225982666016f, 0.054163314402103424072f, 0.99620306491851806641f, -0.33461973071098327637f, -0.49727717041969299316f},
  {-0.31294664740562438965f, 0.023693196475505828857f, -0.38187411427497863770f, -0.46844065189361572266f, -0.25707426667213439941f, 0.075830370187759399414f, 0.18918988108634948730f, 0.078660868108272552490f, -0.23166279494762420654f, 0.16492670774459838867f, 0.0078711248934268951416f, 0.79957783222198486328f, 0.10195480287075042725f, -0.034681908786296844482f, -0.40901303291320800781f, -0.78352171182632446289f},
  {0.10525706410408020020f, -0.074320122599601745605f, -0.047250151634216308594f, -0.00011665514466585591435f, -0.0086843762546777725220f, 0.096293769776821136475f, -0.063162371516227722168f, 0.093847513198852539062f, -0.046072419732809066772f, 0.0052604097872972488403f, 0.077408201992511749268f, 0.014622945338487625122f, -0.014143180102109909058f, -0.046787533909082412720f, 0.078309632837772369385f, -0.024404810741543769836f},
  {-0.59401881694793701172f, -0.51934832334518432617f, 0.75347536802291870117f, -0.61754810810089111328f, 1.0021378993988037109f, 0.45342186093330383301f, -0.11661902070045471191f, 0.083873704075813293457f, 0.46781179308891296387f, -0.035944256931543350220f, 0.99664270877838134766f, -0.47566092014312744141f, 0.28480240702629089355f, 0.13329005241394042969f, -0.49721378087997436523f, -0.41394558548927307129f},
  {0.32118806242942810059f, 0.31593015789985656738f, 0.49518546462059020996f, 0.27215245366096496582f, -0.032941337674856185913f, -0.18971887230873107910f, -0.11314444243907928467f, 0.29698780179023742676f, 0.61014199256896972656f, -0.33335393667221069336f, 0.036874674260616302490f, 0.23399299383163452148f, -0.41092219948768615723f, 0.39940905570983886719f, 0.27385795116424560547f, -0.48709589242935180664f},
  {-0.80720931291580200195f, 0.72164434194564819336f, 0.74230808019638061523f, 0.51508271694183349609f, -0.091136001050472259521f, 0.56490385532379150391f, -0.011811569333076477051f, 0.27840274572372436523f, -1.2517300844192504883f, 0.37999099493026733398f, -0.34864822030067443848f, -0.84365832805633544922f, -0.40324121713638305664f, -0.19293490052223205566f, 0.43813160061836242676f, -0.90413820743560791016f},
  {0.30198970437049865723f, 0.15166550874710083008f, -0.30655094981193542480f, 0.19276399910449981689f, -0.074415385723114013672f, -0.045588005334138870239f, 0.075834251940250396729f, -0.19268859922885894775f, 0.081867948174476623535f, -0.19310589134693145752f, 0.26977998018264770508f, -0.36789432168006896973f, 0.23324085772037506104f, -0.38558766245841979980f, -0.11514559388160705566f, -0.40230491757392883301f},
  {-0.35875144600868225098f, 0.25812792778015136719f, -0.24231319129467010498f, 0.027114666998386383057f, -0.18058027327060699463f, 0.21875825524330139160f, 0.30526211857795715332f, -0.18345418572425842285f, -0.0039506689645349979401f, -0.045447789132595062256f, 0.61397206783294677734f, 0.048619098961353302002f, 0.13730148971080780029f, 0.32213109731674194336f, 0.42423135042190551758f, 0.21567864716053009033f},
  {0.55651789903640747070f, -0.60900920629501342773f, 0.11242990195751190186f, 0.44565528631210327148f, 0.082570195198059082031f, 0.55078947544097900391f, -0.14160129427909851074f, 0.70659476518630981445f, -0.43558081984519958496f, -0.064239375293254852295f, 0.27456808090209960938f, 0.46621251106262207031f, 0.65285944938659667969f, -0.13078849017620086670f, 0.49425935745239257812f, -0.068209089338779449463f}
};
static const float tensor__2_Constant_output_0[16][16] = 
{
  {-0.027707541361451148987f, -0.054035231471061706543f, 0.071106664836406707764f, -0.073559686541557312012f, 0.078676134347915649414f, 0.18873988091945648193f, 0.048461861908435821533f, 0.078362040221691131592f, 0.046739846467971801758f, -0.096545681357383728027f, 0.039981149137020111084f, 0.17452591657638549805f, -0.28883469104766845703f, 0.085595495998859405518f, 0.35184273123741149902f, -0.41340443491935729980f},
  {0.29414173960685729980f, -0.083589151501655578613f, -0.011070668697357177734f, -0.49499538540840148926f, 0.049207367002964019775f, -0.23842261731624603271f, -0.45150166749954223633f, 0.21469314396381378174f, 0.35448363423347473145f, -0.12796002626419067383f, 0.48034986853599548340f, -0.27681034803390502930f, -0.48782753944396972656f, 0.23199322819709777832f, -0.28729432821273803711f, -0.24322891235351562500f},
  {-0.17507898807525634766f, -0.20935454964637756348f, -0.26992765069007873535f, -0.015912115573883056641f, -0.20858527719974517822f, 0.064047545194625854492f, 0.094327241182327270508f, 0.27222257852554321289f, 0.25260543823242187500f, 0.079079635441303253174f, -0.090804092586040496826f, -0.19849412143230438232f, 0.022116722539067268372f, -0.14121825993061065674f, 0.072176814079284667969f, -0.018827708438038825989f},
  {0.015207283198833465576f, -0.0086863841861486434937f, 0.066032089293003082275f, -0.018790191039443016052f, 0.61612796783447265625f, 0.11834338307380676270f, -0.022565467283129692078f, -0.041581418365240097046f, 0.64069068431854248047f, -0.21463862061500549316f, 0.34749680757522583008f, -0.22881947457790374756f, 0.17758835852146148682f, 0.074708357453346252441f, -0.11449784785509109497f, -0.18802286684513092041f},
  {-0.074098527431488037109f, -0.082417070865631103516f, 0.21562737226486206055f, -0.091570280492305755615f, 0.31317561864852905273f, -0.15737171471118927002f, 0.19600485265254974365f, 0.15362361073493957520f, -0.052558325231075286865f, -0.047339670360088348389f, 0.032839193940162658691f, -0.13637571036815643311f, 0.20053599774837493896f, -0.23434408009052276611f, -0.10708271712064743042f, -0.21889047324657440186f},
  {-0.48873963952064514160f, -0.15857295691967010498f, 0.056776322424411773682f, -0.27837258577346801758f, -0.18240039050579071045f, -0.043152160942554473877f, 0.018612887710332870483f, -0.43119305372238159180f, -0.091599315404891967773f, 0.17973265051841735840f, 0.17182530462741851807f, -0.17935551702976226807f, 0.20431663095951080322f, 0.33780357241630554199f, 0.026297573000192642212f, -0.18298353254795074463f},
  {-0.19279921054840087891f, 0.14382180571556091309f, -0.30057117342948913574f, -0.22681394219398498535f, -0.085531100630760192871f, -0.13768684864044189453f, -0.48769819736480712891f, 0.20008505880832672119f, -0.28325897455215454102f, -0.41704121232032775879f, -0.28855460882186889648f, 0.20235463976860046387f, 0.29071220755577087402f, 0.013882881030440330505f, 0.057093374431133270264f, -0.14324505627155303955f},
  {0.24402643740177154541f, 0.45305576920509338379f, 0.024599794298410415649f, 0.11266046017408370972f, -0.35711959004402160645f, -0.11770157516002655029f, 0.21990662813186645508f, 0.090217240154743194580f, 0.065042912960052490234f, -0.082082420587539672852f, 0.14083611965179443359f, -0.18688304722309112549f, 0.25606462359428405762f, 0.13417994976043701172f, 0.11346477270126342773f, -0.26498693227767944336f},
  {0.26496577262878417969f, -0.23691193759441375732f, 0.37362256646156311035f, -0.20391069352626800537f, -0.080463349819183349609f, 0.17984674870967864990f, -0.0084475679323077201843f, -0.18677005171775817871f, 0.26622411608695983887f, 0.17362000048160552979f, -0.49814832210540771484f, -0.0067716911435127258301f, -0.0033609434030950069427f, 0.0037783621810376644135f, -0.14669640362262725830f, -0.039450529962778091431f},
  {-0.24160657823085784912f, -0.061443440616130828857f, 0.27075019478797912598f, 0.16096346080303192139f, -0.41554540395736694336f, -0.39027133584022521973f, 0.23328085243701934814f, 0.068907096982002258301f, -0.13987624645233154297f, 0.12148620188236236572f, -0.11939847469329833984f, 0.45956507325172424316f, 0.0040690139867365360260f, -0.19760537147521972656f, 0.011364621110260486603f, 0.16274410486221313477f},
  {-0.075054533779621124268f, 0.29849207401275634766f, -0.14084455370903015137f, -0.14099378883838653564f, 0.18065921962261199951f, -0.21062280237674713135f, -0.085399031639099121094f, 0.0053957374766469001770f, 0.13213299214839935303f, 0.35430091619491577148f, -0.17746940255165100098f, 0.063948146998882293701f, -0.017933130264282226562f, -0.028475532308220863342f, 0.12218438833951950073f, -0.049012221395969390869f},
  {-0.041463993489742279053f, 0.12756089866161346436f, -0.074106700718402862549f, 0.023716870695352554321f, -0.054454255849123001099f, 0.34912443161010742188f, -0.034817833453416824341f, 0.11219019442796707153f, -0.062610186636447906494f, 0.26443222165107727051f, 0.16075950860977172852f, 0.31644195318222045898f, 0.089663602411746978760f, -0.036495279520750045776f, -0.47580745816230773926f, -0.25946155190467834473f},
  {0.12354157865047454834f, -0.28387978672981262207f, -0.0075478889048099517822f, 0.58227115869522094727f, -0.011637079529464244843f, -0.13347014784812927246f, -0.46782341599464416504f, -0.058578941971063613892f, -0.019374547526240348816f, 0.30419856309890747070f, 0.066972300410270690918f, -0.0075214751996099948883f, 0.15241137146949768066f, -0.061903394758701324463f, -0.0075499983504414558411f, -0.40114688873291015625f},
  {0.11045601218938827515f, -0.12045336514711380005f, -0.47189441323280334473f, 0.10993636399507522583f, 0.047986358404159545898f, -0.29478454589843750000f, 0.37521296739578247070f, -0.29699769616127014160f, -0.069833606481552124023f, -0.16873516142368316650f, -0.26705330610275268555f, 0.046979933977127075195f, -0.24857440590858459473f, 0.11750985682010650635f, -0.32506310939788818359f, -0.28549379110336303711f},
  {0.34568786621093750000f, 0.099203154444694519043f, -0.23125874996185302734f, 0.10312967002391815186f, 0.34950545430183410645f, 0.43948689103126525879f, 0.11266314238309860229f, -0.15542145073413848877f, 0.083399653434753417969f, 0.10795900970697402954f, 0.14239068329334259033f, -0.25119692087173461914f, 0.00035269692307338118553f, -0.18969695270061492920f, 0.056541100144386291504f, 0.056626889854669570923f},
  {-0.097226656973361968994f, -0.084100015461444854736f, 0.26546394824981689453f, -0.16326528787612915039f, 0.34315806627273559570f, -0.18312032520771026611f, 0.17757892608642578125f, 0.068543508648872375488f, 0.093735873699188232422f, -0.16683231294155120850f, 0.065819725394248962402f, -0.082192443311214447021f, 0.23306025564670562744f, -0.40302020311355590820f, -0.10730519890785217285f, -0.34423944354057312012f}
};
static const float tensor__2_Constant_1_output_0[16] = 
{-0.17220456898212432861f, 0.22807712852954864502f, -0.45709350705146789551f, 0.36009946465492248535f, 0.43520161509513854980f, -0.077746272087097167969f, -0.23219157755374908447f, 0.65832084417343139648f, -0.76847577095031738281f, -0.16619594395160675049f, 0.080008402466773986816f, 0.54729622602462768555f, 0.35786226391792297363f, -0.51959550380706787109f, 0.65595549345016479492f, 0.23950068652629852295f};
static const float tensor__2_Constant_2_output_0[16][16] = 
{
  {-0.071650438010692596436f, -0.13973264396190643311f, 0.18387860059738159180f, -0.19022199511528015137f, 0.20345290005207061768f, 0.48807272315025329590f, 0.12532016634941101074f, 0.20264066755771636963f, 0.12086711078882217407f, -0.24966272711753845215f, 0.10338942706584930420f, 0.45131605863571166992f, -0.74691337347030639648f, 0.22134605050086975098f, 0.90984928607940673828f, -1.0690450668334960938f},
  {0.26864448189735412598f, -0.076343342661857604980f, -0.010111023671925067902f, -0.45208743214607238770f, 0.044941898435354232788f, -0.21775528788566589355f, -0.41236388683319091797f, 0.19608277082443237305f, 0.32375574111938476562f, -0.11686799675226211548f, 0.43871143460273742676f, -0.25281542539596557617f, -0.44554090499877929688f, 0.21188323199748992920f, -0.26239064335823059082f, -0.22214496135711669922f},
  {-0.69419103860855102539f, -0.83009415864944458008f, -1.0702674388885498047f, -0.063091792166233062744f, -0.82704401016235351562f, 0.25394955277442932129f, 0.37400904297828674316f, 1.0793669223785400391f, 1.0015846490859985352f, 0.31355202198028564453f, -0.36003968119621276855f, -0.78703236579895019531f, 0.087693162262439727783f, -0.55993264913558959961f, 0.28618222475051879883f, -0.074652165174484252930f},
  {0.0044008996337652206421f, -0.0025137891061604022980f, 0.019109303131699562073f, -0.0054377722553908824921f, 0.17830386757850646973f, 0.034247890114784240723f, -0.0065303151495754718781f, -0.012033421546220779419f, 0.18541216850280761719f, -0.062115170061588287354f, 0.10056356340646743774f, -0.066219031810760498047f, 0.051393039524555206299f, 0.021620165556669235229f, -0.033135011792182922363f, -0.054412726312875747681f},
  {-0.16871058940887451172f, -0.18765060603618621826f, 0.49094933271408081055f, -0.20849101245403289795f, 0.71305119991302490234f, -0.35831043124198913574f, 0.44627195596694946289f, 0.34977659583091735840f, -0.11966697126626968384f, -0.10778491944074630737f, 0.074769638478755950928f, -0.31050586700439453125f, 0.45658865571022033691f, -0.53356432914733886719f, -0.24381037056446075439f, -0.49837890267372131348f},
  {-1.0442907810211181641f, -0.33882308006286621094f, 0.12131405621767044067f, -0.59479916095733642578f, -0.38973519206047058105f, -0.092203289270401000977f, 0.039770185947418212891f, -0.92133086919784545898f, -0.19572040438652038574f, 0.38403505086898803711f, 0.36713939905166625977f, -0.38322922587394714355f, 0.43656367063522338867f, 0.72178542613983154297f, 0.056190066039562225342f, -0.39098119735717773438f},
  {-0.22823342680931091309f, 0.17025455832481384277f, -0.35581260919570922852f, -0.26849967241287231445f, -0.10125070810317993164f, -0.16299206018447875977f, -0.57733136415481567383f, 0.23685832321643829346f, -0.33531862497329711914f, -0.49368846416473388672f, -0.34158754348754882812f, 0.23954503238201141357f, 0.34414166212081909180f, 0.016434390097856521606f, 0.067586459219455718994f, -0.16957180202007293701f},
  {0.61001235246658325195f, 1.1325396299362182617f, 0.061494067311286926270f, 0.28162634372711181641f, -0.89272028207778930664f, -0.29422801733016967773f, 0.54971814155578613281f, 0.22552321851253509521f, 0.16259294748306274414f, -0.20518796145915985107f, 0.35205927491188049316f, -0.46716645359992980957f, 0.64010512828826904297f, 0.33542031049728393555f, 0.28363692760467529297f, -0.66240894794464111328f},
  {0.44743952155113220215f, -0.40006586909294128418f, 0.63092488050460815430f, -0.34433767199516296387f, -0.13587597012519836426f, 0.30370163917541503906f, -0.014265147037804126740f, -0.31539282202720642090f, 0.44956442713737487793f, 0.29318672418594360352f, -0.84120768308639526367f, -0.011435145512223243713f, -0.0056755212135612964630f, 0.0063804034143686294556f, -0.24772168695926666260f, -0.066618889570236206055f},
  {-0.015907613560557365417f, -0.0040454962290823459625f, 0.017826458439230918884f, 0.010597992688417434692f, -0.027359917759895324707f, -0.025695847347378730774f, 0.015359440818428993225f, 0.0045369109138846397400f, -0.0092095891013741493225f, 0.0079987710341811180115f, -0.0078613124787807464600f, 0.030258215963840484619f, 0.00026790788979269564152f, -0.013010531663894653320f, 0.00074825779302045702934f, 0.010715231299400329590f},
  {-0.29145070910453796387f, 1.1591002941131591797f, -0.54692560434341430664f, -0.54750514030456542969f, 0.70153337717056274414f, -0.81788754463195800781f, -0.33162033557891845703f, 0.020952653139829635620f, 0.51309698820114135742f, 1.3758163452148437500f, -0.68914669752120971680f, 0.24832256138324737549f, -0.069637678563594818115f, -0.11057578772306442261f, 0.47446471452713012695f, -0.19032357633113861084f},
  {-0.10630615800619125366f, 0.32704302668571472168f, -0.18999613821506500244f, 0.060805756598711013794f, -0.13961084187030792236f, 0.89509177207946777344f, -0.089266613125801086426f, 0.28763532638549804688f, -0.16052116453647613525f, 0.67795628309249877930f, 0.41215822100639343262f, 0.81129980087280273438f, 0.22988122701644897461f, -0.093567281961441040039f, -1.2198840379714965820f, -0.66521239280700683594f},
  {0.19689469039440155029f, -0.45243409276008605957f, -0.012029466219246387482f, 0.92799603939056396484f, -0.018546624109148979187f, -0.21271836757659912109f, -0.74559468030929565430f, -0.093360327184200286865f, -0.030878230929374694824f, 0.48481717705726623535f, 0.10673726350069046021f, -0.011987368576228618622f, 0.24290598928928375244f, -0.098658680915832519531f, -0.012032828293740749359f, -0.63932883739471435547f},
  {0.22222924232482910156f, -0.24234315752983093262f, -0.94941627979278564453f, 0.22118374705314636230f, 0.096544966101646423340f, -0.59308445453643798828f, 0.75490045547485351562f, -0.59753715991973876953f, -0.14049999415874481201f, -0.33948251605033874512f, -0.53729128837585449219f, 0.094520114362239837646f, -0.50011312961578369141f, 0.23642104864120483398f, -0.65400266647338867188f, -0.57439213991165161133f},
  {0.25007519125938415527f, 0.071764878928661346436f, -0.16729564964771270752f, 0.074605375528335571289f, 0.25283688306808471680f, 0.31793066859245300293f, 0.081502012908458709717f, -0.11243394017219543457f, 0.060332417488098144531f, 0.078098982572555541992f, 0.10300730913877487183f, -0.18171918392181396484f, 0.00025514562730677425861f, -0.13722929358482360840f, 0.040902584791183471680f, 0.040964644402265548706f},
  {-0.11741882562637329102f, -0.10156602412462234497f, 0.32059589028358459473f, -0.19717244803905487061f, 0.41442561149597167969f, -0.22115100920200347900f, 0.21445876359939575195f, 0.082778722047805786133f, 0.11320307105779647827f, -0.20148028433322906494f, 0.079489260911941528320f, -0.099262289702892303467f, 0.28146255016326904297f, -0.48671999573707580566f, -0.12959049642086029053f, -0.41573157906532287598f}
};
static const float tensor__3_Constant_output_0[1][16] = 
{
  {-0.20975674688816070557f, 0.20881238579750061035f, -0.29551988840103149414f, -0.22252827882766723633f, -0.37541604042053222656f, -0.25009983777999877930f, 0.19072394073009490967f, 0.018969083204865455627f, -0.24443399906158447266f, -0.16515666246414184570f, -0.23851308226585388184f, -0.26282829046249389648f, -0.051555130630731582642f, 0.23743534088134765625f, 0.51024478673934936523f, -0.054322708398103713989f}
};
static const float tensor__3_Constant_1_output_0[1] = 
{-0.24575160443782806396f};
static const int64_t tensor__0_Reshape_1_output_0[4] = 
{0, 0, 0, 13};
union tensor_union_0 {
float tensor__0_Pad_output_0[1][16];
float tensor__2_Gemm_output_0[1][16];
float tensor__2_MatMul_output_0[1][16];
};
static union tensor_union_0 tu0;

union tensor_union_1 {
float tensor__1_Gemm_output_0[1][16];
float tensor__1_MatMul_output_0[1][16];
float tensor__2_activation_Relu_output_0[1][16];
float tensor__2_Sub_output_0[1][16];
};
static union tensor_union_1 tu1;

union tensor_union_2 {
float tensor__1_activation_Relu_output_0[1][16];
float tensor__1_Sub_output_0[1][16];
};
static union tensor_union_2 tu2;


static inline void node__0_Pad( const float data[1][3], const int64_t pads[4], const float constant_value[1], float output[1][16] )
{
	/* Pad: 
	 * pad at start: 0 0 
	 * pad at end:   0 13 
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
		for( uint32_t o1=0, il1=0; o1<16; o1++ ) {
			bool pad_at_1=false;
			if( o1 < 0){
				pad_at_1= true;
			}
			else if( o1 < 3){
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

static inline void node__1_Gemm( const float tensor__0_Pad_output_0[1][16], const float tensor__1_Constant_output_0[16][16], const float tensor__1_Constant_1_output_0[16], float tensor__1_Gemm_output_0[1][16] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 16;
	const int N = 16;
	float (*A)[16]  = (float(*)[16])tensor__0_Pad_output_0;
	float (*Y)[16]  = (float(*)[16])tensor__1_Gemm_output_0;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[16]  = (float(*)[16])tensor__1_Constant_1_output_0;
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

static inline void node__1_activation_Relu( const float tensor__1_Gemm_output_0[1][16], float tensor__1_activation_Relu_output_0[1][16] )
{
	/*Relu*/
	float *X = (float*)tensor__1_Gemm_output_0;
	float *Y = (float*)tensor__1_activation_Relu_output_0;
	for( uint32_t i=0; i<16; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node__1_MatMul( const float A[1][16], const float B[16][16], float Y[1][16] )
{
	/* MatMul */
	for( uint32_t r=0; r<1; r++ )
		for( uint32_t c=0; c<16; c++ ) {
			Y[r][c] = 0;
			for( uint32_t i=0; i<16; i++ )
				Y[r][c] += A[r][i] * B[i][c];
		}
}

static inline void node__1_Sub( const float tensor__0_Pad_output_0[1][16], const float tensor__1_MatMul_output_0[1][16], float tensor__1_Sub_output_0[1][16] )
{
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<16; i1++) {
		tensor__1_Sub_output_0[i0][i1] = tensor__0_Pad_output_0[0][i1]-tensor__1_MatMul_output_0[0][i1];;
	}
	}
}

static inline void node__2_Gemm( const float tensor__1_Sub_output_0[1][16], const float tensor__2_Constant_output_0[16][16], const float tensor__2_Constant_1_output_0[16], float tensor__2_Gemm_output_0[1][16] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 16;
	const int N = 16;
	float (*A)[16]  = (float(*)[16])tensor__1_Sub_output_0;
	float (*Y)[16]  = (float(*)[16])tensor__2_Gemm_output_0;
	float alpha = 1.0000000000000000000;
	float beta = 1.0000000000000000000;
	float (*C)[16]  = (float(*)[16])tensor__2_Constant_1_output_0;
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

static inline void node__2_activation_Relu( const float tensor__2_Gemm_output_0[1][16], float tensor__2_activation_Relu_output_0[1][16] )
{
	/*Relu*/
	float *X = (float*)tensor__2_Gemm_output_0;
	float *Y = (float*)tensor__2_activation_Relu_output_0;
	for( uint32_t i=0; i<16; i++ )
		Y[i] = X[i] > 0 ? X[i] : 0;

}

static inline void node__2_MatMul( const float A[1][16], const float B[16][16], float Y[1][16] )
{
	/* MatMul */
	for( uint32_t r=0; r<1; r++ )
		for( uint32_t c=0; c<16; c++ ) {
			Y[r][c] = 0;
			for( uint32_t i=0; i<16; i++ )
				Y[r][c] += A[r][i] * B[i][c];
		}
}

static inline void node__2_Sub( const float tensor__1_Sub_output_0[1][16], const float tensor__2_MatMul_output_0[1][16], float tensor__2_Sub_output_0[1][16] )
{
	/* Sub
	   Implemented with Elementwise_2 template.
	   Attributes (these are the union of attributes for all 2-element-wise
	               operands. So most likely these values are ignored by onnx2c).
	   shift_dir: NOT_GIVEN
	   fmod: 0
	 */
	for (unsigned i0=0; i0<1; i0++) {
	for (unsigned i1=0; i1<16; i1++) {
		tensor__2_Sub_output_0[i0][i1] = tensor__1_Sub_output_0[0][i1]-tensor__2_MatMul_output_0[0][i1];;
	}
	}
}

static inline void node__3_Gemm( const float tensor__2_Sub_output_0[1][16], const float tensor__3_Constant_output_0[1][16], const float tensor__3_Constant_1_output_0[1], float tensor_43[1][1] )
{
	/* Gemm */
	/* alpha   = 1.0000000000000000000
	   beta    = 1.0000000000000000000
	   transA  = 0
	   transB  = 1
	 */
	const int M = 1;
	const int K = 16;
	const int N = 1;
	float (*A)[16]  = (float(*)[16])tensor__2_Sub_output_0;
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


void entry(const float tensor_onnx__Pad_0[1][3], float tensor_43[1][1]) {
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
