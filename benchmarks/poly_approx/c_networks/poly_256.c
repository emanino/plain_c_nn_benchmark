#include <verifier_functions.h>

#include <math.h> 
 #include <string.h> 
#include <keras2c/k2c_include.h> 
#include <keras2c/k2c_tensor_include.h> 

 


void poly_256(k2c_tensor* dense_64_input_input, k2c_tensor* dense_65_output) { 

float dense_64_output_array[256] = {0}; 
k2c_tensor dense_64_output = {&dense_64_output_array[0],1,256,{256,  1,  1,  1,  1}}; 
float dense_64_kernel_array[256] = {
+1.98249206e-01f,-2.77840972e-01f,-1.00933619e-01f,-2.17439458e-01f,+1.66096449e-01f,
+1.10954791e-01f,+3.38226766e-03f,-1.36632174e-01f,-7.74573982e-02f,-1.31161600e-01f,
-6.97522387e-02f,+1.08668715e-01f,+3.09066832e-01f,-1.60658881e-01f,-1.52290672e-01f,
-1.40864357e-01f,+1.50644168e-01f,+1.08751744e-01f,+2.80335218e-01f,-7.41586834e-02f,
+2.52473623e-01f,-1.66778892e-01f,+1.99506089e-01f,-1.63607389e-01f,-2.04862133e-01f,
-1.52453303e-01f,-1.06683552e-01f,-8.61092508e-02f,-7.84460828e-02f,-1.72779992e-01f,
+9.62415040e-02f,-1.49198219e-01f,-1.65764213e-01f,+1.03533685e-01f,-1.12279095e-01f,
+1.25467852e-01f,-1.53401077e-01f,+2.22235322e-01f,-1.21822730e-01f,+1.12945311e-01f,
-1.54343635e-01f,-8.37707669e-02f,+1.83895312e-03f,+1.01315334e-01f,-1.37689695e-01f,
-1.66286454e-01f,+1.28715485e-01f,-1.25490680e-01f,-7.50781596e-02f,+1.07854113e-01f,
+1.31885007e-01f,-2.10542694e-01f,-5.39168678e-02f,-9.99805629e-02f,-1.46397799e-01f,
-1.54006958e-01f,+1.02200687e-01f,-1.63047418e-01f,+1.49685606e-01f,-1.32420599e-01f,
+1.40813977e-01f,-6.78717941e-02f,+3.71534795e-01f,+1.32435605e-01f,+9.57688093e-02f,
+1.16578072e-01f,+4.14714813e-01f,+1.17348835e-01f,+8.02196190e-02f,+9.90470797e-02f,
+1.58860654e-01f,-1.49298623e-01f,-1.60426483e-01f,+9.66448188e-02f,+1.64505258e-01f,
+4.54825491e-01f,+9.99249741e-02f,-1.62977353e-01f,+1.24294363e-01f,+1.25528231e-01f,
+2.04047933e-01f,+2.18422741e-01f,-1.36030778e-01f,-1.24568745e-01f,+9.90171283e-02f,
-6.26522899e-02f,-1.33982360e-01f,-1.54389068e-01f,+2.20631137e-01f,-4.84535582e-02f,
-6.49302378e-02f,-1.16692074e-01f,-6.11615591e-02f,+1.84130892e-01f,+1.00740984e-01f,
+2.43454352e-01f,+1.13789439e-01f,-1.61504135e-01f,+1.23932898e-01f,+1.87751666e-01f,
-2.10019976e-01f,-1.66752741e-01f,-4.65897955e-02f,+1.90550089e-01f,+1.14472017e-01f,
+2.34306127e-01f,-6.52740970e-02f,+3.01729053e-01f,+8.27782601e-02f,+8.36761892e-02f,
-4.96547073e-02f,+9.30091068e-02f,+9.19878110e-02f,-1.58155799e-01f,-6.77073672e-02f,
-9.62883458e-02f,-1.25400707e-01f,-1.48381814e-01f,-1.60948768e-01f,+1.61013991e-01f,
+2.14981377e-01f,+1.51377097e-01f,-1.42473996e-01f,+1.24211602e-01f,+9.82701033e-02f,
-1.61760151e-01f,-6.74274415e-02f,+8.81567672e-02f,-1.22991219e-01f,-1.27958208e-01f,
-1.41251966e-01f,-5.18912449e-02f,+8.39742348e-02f,+5.32517612e-01f,-1.65986195e-01f,
-1.97296098e-01f,-1.48307160e-01f,-1.23135649e-01f,-1.61342725e-01f,-1.07800625e-01f,
-1.21503748e-01f,+2.27277040e-01f,+1.30182326e-01f,+1.14276417e-01f,+1.67713910e-01f,
+1.18634805e-01f,-7.88192898e-02f,+1.62075415e-01f,-1.63350418e-01f,-9.52530280e-02f,
+8.50467309e-02f,+2.70884573e-01f,+8.11915249e-02f,-9.13960189e-02f,+8.22255835e-02f,
+1.56960294e-01f,-8.83713663e-02f,-7.43417740e-02f,-1.41112685e-01f,-7.91001171e-02f,
-7.29145408e-02f,-9.81331840e-02f,-9.28542688e-02f,+4.45611149e-01f,-1.00836389e-01f,
-1.21469066e-01f,-1.58970788e-01f,+2.54296452e-01f,-1.54785126e-01f,+8.18277895e-02f,
+7.83758163e-02f,+2.12586433e-01f,-2.22528577e-01f,-1.53676987e-01f,+4.96589720e-01f,
-6.32777587e-02f,+2.04822838e-01f,-2.23712146e-01f,+7.20448345e-02f,-1.31568238e-01f,
+2.97840506e-01f,+7.67394826e-02f,-4.22348827e-02f,+1.24197923e-01f,-1.86132610e-01f,
-8.10743421e-02f,+1.11937642e-01f,+1.76896334e-01f,+1.39003024e-01f,+1.42330438e-01f,
-8.78075436e-02f,-1.40433848e-01f,-4.53156233e-02f,-6.36006892e-02f,-1.88962445e-01f,
-6.24080598e-02f,+9.91798267e-02f,+9.11355019e-02f,-8.72315168e-02f,+1.09520033e-01f,
+1.65577456e-01f,+8.26169178e-02f,-1.37941241e-01f,-1.49411246e-01f,-4.84248251e-02f,
+1.77613422e-01f,-1.68978915e-01f,+1.07524425e-01f,+8.22215229e-02f,+1.26218617e-01f,
+9.57561061e-02f,-1.27011582e-01f,+1.32396519e-01f,+8.66538286e-02f,+1.36114120e-01f,
-9.21127200e-02f,+2.14718863e-01f,+1.02187194e-01f,+1.40389115e-01f,+1.02101542e-01f,
+1.12976745e-01f,+1.47925061e-03f,+8.36659968e-02f,-2.04342082e-01f,+9.84552875e-02f,
-7.08546340e-02f,+9.87575203e-02f,-1.41164482e-01f,+8.80182534e-02f,+1.07783034e-01f,
+8.14471021e-02f,+1.27850831e-01f,+1.80111393e-01f,+7.93404579e-02f,+9.14566815e-02f,
+1.19309366e-01f,+8.83950666e-02f,-5.53969033e-02f,-9.72944498e-03f,+1.00549951e-03f,
-6.39862195e-02f,-1.11156225e-01f,+3.46533328e-01f,-1.45554960e-01f,-4.59593907e-02f,
+1.55875444e-01f,+1.48804203e-01f,-8.38886499e-02f,-1.35361835e-01f,-4.85821534e-03f,
+1.24267988e-01f,-6.41536638e-02f,-1.48879990e-01f,+3.53699714e-01f,-5.12454398e-02f,
+2.62013704e-01f,}; 
k2c_tensor dense_64_kernel = {&dense_64_kernel_array[0],2,256,{  1,256,  1,  1,  1}}; 
float dense_64_bias_array[256] = {
-5.37710562e-02f,-4.68938768e-01f,+1.04824044e-01f,-3.66304249e-01f,-7.95474872e-02f,
+1.24153286e-01f,-1.82760060e-02f,-2.13722274e-01f,+8.63404050e-02f,-2.02250123e-01f,
+8.94846842e-02f,+1.22709356e-01f,-7.28753395e-03f,-2.18262240e-01f,-2.49093205e-01f,
+2.70550311e-01f,-7.00205117e-02f,+1.21296465e-01f,+4.37896661e-02f,+9.51410905e-02f,
-2.06704512e-02f,-2.79825598e-01f,-5.39150536e-02f,-2.61589408e-01f,-1.84314206e-01f,
-2.13402286e-01f,+1.09959826e-01f,+9.53949466e-02f,+8.85286182e-02f,-2.42320001e-01f,
-7.41639212e-02f,-2.33758986e-01f,-2.59666353e-01f,-7.91434944e-02f,+1.15203299e-01f,
-8.75928625e-02f,-2.53663778e-01f,-4.16087620e-02f,+1.17631346e-01f,-7.93821588e-02f,
-2.11359948e-01f,+9.29796547e-02f,-1.99036989e-02f,+1.12240292e-01f,+1.21187016e-01f,
-2.48300701e-01f,-7.85987079e-02f,+1.18356019e-01f,+9.58990902e-02f,+1.42708153e-01f,
-8.01049918e-02f,-3.54726195e-01f,+6.91764504e-02f,+1.03423089e-01f,-2.27743983e-01f,
-2.37392068e-01f,+1.13836773e-01f,-2.65695989e-01f,-7.58091360e-02f,+1.19139358e-01f,
-9.12302583e-02f,+8.68962854e-02f,-9.52318907e-01f,-9.40054655e-02f,+1.06219783e-01f,
-7.72350281e-02f,+1.99031252e-02f,+1.31926313e-01f,+9.07530412e-02f,-7.62050599e-02f,
-6.96599856e-02f,-2.23062113e-01f,-2.16737539e-01f,+1.06635645e-01f,-7.15917647e-02f,
-1.09802365e+00f,-7.69130886e-02f,-2.34990835e-01f,+1.01438388e-01f,+1.41580135e-01f,
-6.62016571e-02f,-7.17780436e-04f,+1.26940906e-01f,+1.40582502e-01f,+1.09346643e-01f,
+7.82791898e-02f,+2.56784379e-01f,-2.25404814e-01f,-4.12861593e-02f,+6.21607378e-02f,
+7.31524229e-02f,+1.14992812e-01f,-5.33050895e-02f,-6.69258460e-02f,+1.11381851e-01f,
-3.16969678e-02f,-8.34599361e-02f,-2.61832446e-01f,+1.39108315e-01f,-6.25326782e-02f,
-3.53849947e-01f,-2.67229080e-01f,+5.85919283e-02f,-6.43231869e-02f,-8.49854648e-02f,
+3.70386653e-02f,+8.08483064e-02f,-1.44049143e-02f,+9.38792452e-02f,+9.35363024e-02f,
+6.21399172e-02f,+1.02856770e-01f,+1.02373064e-01f,-2.32833862e-01f,+7.79107213e-02f,
+1.04994476e-01f,+1.16420574e-01f,+2.81314373e-01f,-2.39237621e-01f,+3.59924734e-02f,
-4.27493080e-02f,-7.42516592e-02f,-2.04733759e-01f,+1.01339132e-01f,+1.08459562e-01f,
-2.22919211e-01f,+7.58130029e-02f,+9.97627303e-02f,+1.23092391e-01f,+1.21278979e-01f,
+1.22076578e-01f,+6.51313514e-02f,+9.45783183e-02f,-1.15413976e+00f,-2.69325733e-01f,
-1.75371185e-01f,-2.42664024e-01f,+1.16927341e-01f,-2.19480574e-01f,+1.19334146e-01f,
+1.54154330e-01f,-4.00497057e-02f,-7.77053386e-02f,-8.05967674e-02f,-6.43525422e-02f,
+2.53865216e-02f,+1.00906767e-01f,-7.91618079e-02f,-2.29072511e-01f,+1.03952140e-01f,
+9.65876132e-02f,-3.16141173e-03f,+9.03685540e-02f,+1.00671373e-01f,+9.33658332e-02f,
+2.08155870e-01f,+1.12244353e-01f,+8.29032436e-02f,-2.09736064e-01f,+8.82991999e-02f,
+9.31240097e-02f,+1.24107562e-01f,+1.07775383e-01f,+9.75333974e-02f,+1.12789288e-01f,
+1.33157417e-01f,-2.66824305e-01f,-6.75716639e-01f,-2.22472534e-01f,+1.02568351e-01f,
+8.85143057e-02f,-4.42654602e-02f,-3.74913514e-01f,-2.19190061e-01f,+4.41060066e-02f,
+1.19540825e-01f,-5.15261665e-02f,-3.76984596e-01f,+9.48328897e-02f,+1.22775890e-01f,
-5.40256035e-03f,+8.66378993e-02f,+5.41825406e-02f,-7.88889006e-02f,-3.12990189e-01f,
+9.06285942e-02f,+3.90215963e-02f,+4.24219370e-02f,-8.36080164e-02f,-7.31506720e-02f,
-3.59420963e-02f,-2.12101400e-01f,+5.81361800e-02f,+8.15904811e-02f,-1.80155322e-01f,
+7.70583525e-02f,+1.09567873e-01f,+1.01309545e-01f,+9.86707732e-02f,+3.58965360e-02f,
-7.25377128e-02f,+9.17373821e-02f,+1.21311441e-01f,-2.14204028e-01f,+6.06782846e-02f,
+2.66102970e-01f,-2.39979491e-01f,+1.40750602e-01f,+9.14890915e-02f,-8.32933858e-02f,
+1.08002104e-01f,+1.17994368e-01f,+1.74932048e-01f,+9.58288386e-02f,-7.56125823e-02f,
+1.01456076e-01f,-4.34830561e-02f,-7.89972916e-02f,+1.85399190e-01f,+1.13954760e-01f,
+9.05582607e-02f,-2.01276354e-02f,+9.51795131e-02f,-3.44262987e-01f,-7.49396831e-02f,
+7.97823668e-02f,+1.09044254e-01f,+1.30892918e-01f,+9.72789675e-02f,+1.19995631e-01f,
+9.16669592e-02f,+1.71042711e-01f,-6.84992000e-02f,+8.90805274e-02f,-4.49406803e-02f,
+1.54896006e-01f,+9.79227945e-02f,+7.10643083e-02f,-2.63647120e-02f,-2.06181351e-02f,
+7.21890330e-02f,+1.38041884e-01f,+1.92657597e-02f,-2.16528386e-01f,+5.86164854e-02f,
-8.73045176e-02f,+1.98515445e-01f,+1.07612774e-01f,-2.18729585e-01f,-2.03731749e-02f,
-8.14103186e-02f,+7.24016801e-02f,-2.42928669e-01f,-9.38109934e-01f,+6.46320283e-02f,
+9.27161947e-02f,}; 
k2c_tensor dense_64_bias = {&dense_64_bias_array[0],1,256,{256,  1,  1,  1,  1}}; 
float dense_64_fwork[257] = {0}; 

 
float dense_65_kernel_array[256] = {
-1.74389660e-01f,+4.15183425e-01f,-1.41747892e-01f,+2.93678194e-01f,-1.29073456e-01f,
+1.02139078e-01f,+9.16448683e-02f,+3.42338532e-01f,-1.63372204e-01f,+3.50196600e-01f,
-8.85234848e-02f,+1.37550935e-01f,-1.03035092e-01f,+1.89659759e-01f,+3.04038256e-01f,
+3.97675693e-01f,-2.22184822e-01f,+9.98014957e-02f,-1.32682204e-01f,-6.14947043e-02f,
-1.04175366e-01f,+3.53052646e-01f,-1.61523819e-01f,+2.12404773e-01f,+1.28579170e-01f,
+2.28046730e-01f,-1.25190392e-01f,-1.51131153e-01f,-9.47258323e-02f,+1.30069673e-01f,
-2.45040625e-01f,+2.74638891e-01f,+1.62675574e-01f,-2.08973512e-01f,-9.86418873e-02f,
-1.61500677e-01f,+3.24341089e-01f,-2.07235485e-01f,-1.56899959e-01f,-2.25851700e-01f,
+2.42965803e-01f,-1.55947164e-01f,+5.21233305e-02f,+1.30727008e-01f,-1.38282612e-01f,
+1.53746560e-01f,-1.93847954e-01f,-1.43611684e-01f,-7.01578259e-02f,+1.89932987e-01f,
-1.77424863e-01f,+4.82950181e-01f,-1.51922837e-01f,-1.77364573e-01f,+2.81633496e-01f,
+2.31428593e-01f,+1.24416061e-01f,+2.38873020e-01f,-1.58321232e-01f,-1.55572951e-01f,
-1.33019954e-01f,-7.72330016e-02f,+1.53937244e+00f,-1.41613141e-01f,+1.48242623e-01f,
-2.34985784e-01f,-1.07281014e-01f,+9.12598521e-02f,+2.66799957e-01f,-2.25062877e-01f,
-1.92802429e-01f,+2.43069977e-01f,+1.95495978e-01f,+1.84560463e-01f,-1.66332588e-01f,
+1.42810285e+00f,-2.17526019e-01f,+1.66234642e-01f,+1.95795968e-01f,+9.13200676e-02f,
-1.08177409e-01f,-1.21739656e-01f,-8.48959014e-02f,-5.12669906e-02f,+1.64431080e-01f,
-9.93541628e-02f,+4.09914762e-01f,+2.05547228e-01f,-1.59625158e-01f,-1.24562487e-01f,
-1.80834606e-01f,-1.49890289e-01f,+3.39656696e-02f,-1.40031353e-01f,+1.46110311e-01f,
-1.45162031e-01f,-1.88388482e-01f,+2.39226744e-01f,+1.11532077e-01f,-1.57569960e-01f,
+3.24731380e-01f,+1.78657025e-01f,-1.90455258e-01f,-1.34050846e-01f,-1.79588169e-01f,
-1.41492501e-01f,-1.00857466e-01f,-1.01876706e-01f,+2.45502800e-01f,+2.01092556e-01f,
-1.72265261e-01f,+1.71355441e-01f,+1.60641313e-01f,+1.90136999e-01f,-1.14067107e-01f,
-1.56954914e-01f,-1.76038563e-01f,+3.58903408e-01f,+1.81071207e-01f,-1.77564621e-01f,
-1.53971955e-01f,-1.66063651e-01f,+2.68963665e-01f,+2.04938114e-01f,+1.74108163e-01f,
+1.75140217e-01f,-1.72919780e-01f,+1.77646235e-01f,-8.32513273e-02f,-1.16042279e-01f,
-1.56649560e-01f,-1.40615121e-01f,+1.94820985e-01f,+1.36192131e+00f,+1.54115260e-01f,
+8.69324058e-02f,+3.27769041e-01f,-1.66507944e-01f,+1.83835939e-01f,-7.52382278e-02f,
-5.04522771e-02f,-1.81616515e-01f,-1.98033661e-01f,-2.11104438e-01f,-2.24080831e-01f,
-2.26165727e-01f,-2.94538792e-02f,-1.31423056e-01f,+1.66852891e-01f,-1.65446267e-01f,
+2.28431508e-01f,-1.10168651e-01f,+2.31578216e-01f,-1.48886681e-01f,+2.25091413e-01f,
+1.86627805e-01f,-6.18563294e-02f,-1.96821719e-01f,+2.79231012e-01f,-1.36530966e-01f,
-7.21166655e-02f,-2.78633088e-02f,-6.50425628e-02f,-1.01758726e-01f,-7.05189258e-02f,
-6.17552362e-02f,+4.66300309e-01f,+1.45824480e+00f,+2.03397617e-01f,+2.00759143e-01f,
+2.43892044e-01f,-1.80107564e-01f,+3.08751732e-01f,+2.10322142e-01f,-1.03638269e-01f,
+3.20575029e-01f,-2.03470826e-01f,+4.59579855e-01f,+2.68695265e-01f,-1.04594633e-01f,
-1.05075918e-01f,+2.65416712e-01f,-1.96924001e-01f,-2.03451619e-01f,+2.84022003e-01f,
-1.18831918e-01f,-2.91575134e-01f,-1.73987776e-01f,-1.53775945e-01f,-2.20968708e-01f,
+2.20374111e-02f,+2.87497371e-01f,-1.92634553e-01f,-1.00750931e-01f,+1.89439625e-01f,
-1.13144986e-01f,+1.60282746e-01f,+1.65118754e-01f,-7.49024600e-02f,-2.93671638e-01f,
-1.54664516e-01f,+2.25754201e-01f,-1.38099521e-01f,+2.31229112e-01f,-1.80939287e-01f,
+1.49437904e-01f,+1.47000268e-01f,+1.87810659e-01f,+2.21587598e-01f,-1.76493257e-01f,
+1.55326471e-01f,-1.49496853e-01f,+1.51046291e-01f,+2.08719999e-01f,-2.32877955e-01f,
-1.42981112e-01f,-1.82604119e-01f,-2.02298284e-01f,+1.81442991e-01f,+1.31921872e-01f,
+2.34321177e-01f,+4.94898446e-02f,+2.05494702e-01f,+3.09263468e-01f,-2.52092779e-01f,
-1.33994132e-01f,+1.68293118e-01f,-7.40614757e-02f,+2.05144539e-01f,+1.02343485e-01f,
+2.11990893e-01f,+1.87621340e-01f,-1.35600552e-01f,+2.31924564e-01f,-2.71388233e-01f,
+1.14377677e-01f,+1.85746014e-01f,-1.30811840e-01f,+9.57484618e-02f,+4.31268662e-02f,
-1.79544225e-01f,-5.33958301e-02f,-1.13546804e-01f,+2.58465946e-01f,-1.48957416e-01f,
-1.25574648e-01f,+1.90782011e-01f,-6.70488775e-02f,+4.02858645e-01f,-1.96520751e-03f,
-1.87407747e-01f,-1.72856063e-01f,+3.18267256e-01f,+1.43481886e+00f,-1.30569667e-01f,
-2.12473422e-01f,}; 
k2c_tensor dense_65_kernel = {&dense_65_kernel_array[0],2,256,{256,  1,  1,  1,  1}}; 
float dense_65_bias_array[1] = {
-6.85200095e-02f,}; 
k2c_tensor dense_65_bias = {&dense_65_bias_array[0],1,1,{1,1,1,1,1}}; 
float dense_65_fwork[512] = {0}; 

 
k2c_dense(&dense_64_output,dense_64_input_input,&dense_64_kernel, 
	&dense_64_bias,k2c_relu,dense_64_fwork); 
k2c_dense(dense_65_output,&dense_64_output,&dense_65_kernel, 
	&dense_65_bias,k2c_linear,dense_65_fwork); 

 } 

void poly_256_initialize() { 

} 

void poly_256_terminate() { 

} 
