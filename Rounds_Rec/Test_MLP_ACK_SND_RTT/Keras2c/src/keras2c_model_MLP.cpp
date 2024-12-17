#include <math.h> 
#include <string.h> 
#include <iostream>
#include "../header/k2c_include.h" 
#include "../header/k2c_tensor_include.h" 
#include "../header/keras2c_model_MLP.h"

using namespace std;


void MLPModel:: keras2c_model(const k2c_tensor* input_layer_2_input, k2c_tensor* dense_11_output) { 

float dense_8_output_array[20] = {0}; 
k2c_tensor dense_8_output = {&dense_8_output_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_8_kernel_array[60] = {
-2.18900532e-01f,-3.60853732e-01f,-1.86681539e-01f,+3.83605242e-01f,-1.04611129e-01f,
+3.09795797e-01f,+2.64219880e-01f,+1.76328599e-01f,+2.12268773e-02f,-1.30124062e-01f,
-1.96505450e-02f,-6.58826530e-02f,-1.58556998e-01f,-5.00444114e-01f,+4.55064714e-01f,
+5.00666142e-01f,+3.36474448e-01f,-7.58028626e-02f,+1.93952292e-01f,-1.90943033e-02f,
+1.61243320e-01f,-4.29873586e-01f,+2.17567116e-01f,+3.27401459e-01f,+1.20349467e-01f,
-6.53325766e-02f,-4.79572751e-02f,-3.62042755e-01f,+1.41715601e-01f,+2.57278234e-01f,
-3.30337465e-01f,+5.52278697e-01f,-1.03029482e-01f,-1.07665926e-01f,+3.01383529e-02f,
+5.03537714e-01f,+7.81779438e-02f,+5.64934015e-02f,+5.55636823e-01f,-1.69735432e-01f,
-2.85861790e-01f,+7.88547099e-01f,+5.13580143e-01f,-4.60303247e-01f,-3.10046196e-01f,
-3.10010761e-01f,-1.71665862e-01f,-3.45811129e-01f,+6.03041410e-01f,-2.09463969e-01f,
+5.24056852e-01f,+6.19622409e-01f,+2.90418744e-01f,-1.83427751e-01f,+2.91776389e-01f,
-2.04176039e-01f,+1.21774852e-01f,-4.05092388e-01f,-4.48127240e-01f,+5.50630271e-01f,
}; 
k2c_tensor dense_8_kernel = {&dense_8_kernel_array[0],2,60,{ 3,20, 1, 1, 1}}; 
float dense_8_bias_array[20] = {
+0.00000000e+00f,-1.69888243e-01f,-3.29862624e-01f,+1.88910984e-03f,+0.00000000e+00f,
+2.99981117e-01f,+3.01692992e-01f,+0.00000000e+00f,-3.00772876e-01f,-1.04573555e-02f,
-2.14272484e-01f,-2.48600826e-01f,+4.24722522e-01f,+0.00000000e+00f,-2.21916631e-01f,
-2.81619132e-01f,-1.54832259e-01f,+0.00000000e+00f,-6.03663549e-02f,+4.44404393e-01f,
}; 
k2c_tensor dense_8_bias = {&dense_8_bias_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_8_fwork[63] = {0}; 

 
float dense_9_output_array[20] = {0}; 
k2c_tensor dense_9_output = {&dense_9_output_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_9_kernel_array[400] = {
-3.45653027e-01f,-1.01119459e-01f,-8.18944573e-02f,-3.12924445e-01f,+2.20391512e-01f,
+1.48023486e-01f,+2.41497815e-01f,-9.08532739e-03f,+2.53126919e-01f,-3.72821867e-01f,
+1.33327007e-01f,+2.35736787e-01f,+1.07285082e-02f,-8.07508528e-02f,-1.68328583e-01f,
+1.44090474e-01f,+3.56817305e-01f,+2.29214907e-01f,+2.86837637e-01f,-3.18646729e-02f,
+1.97388637e+00f,-2.15281457e-01f,+8.12326193e-01f,+1.90845311e+00f,-3.54267061e-01f,
-9.86156166e-02f,+1.04913783e+00f,+6.71972334e-01f,-1.66270241e-01f,+7.25996256e-01f,
-1.42665529e+00f,-9.50603104e+00f,+3.04538906e-02f,+2.41670847e-01f,-1.42688900e-01f,
+1.58650231e+00f,+4.24317360e-01f,-5.67563474e-01f,-3.20667207e-01f,-1.02325872e-01f,
-1.60095319e-01f,-9.98522043e-02f,+3.72774899e-01f,-6.72314912e-02f,-9.95348394e-02f,
-6.81700289e-01f,+2.77085304e-01f,+4.37624961e-01f,-5.09138644e-01f,+4.55656826e-01f,
+3.25742632e-01f,+1.38777101e+00f,-2.11625293e-01f,-3.32428694e-01f,-1.43626201e+00f,
-2.46560052e-01f,+7.75965214e-01f,-4.55440611e-01f,-6.51561260e-01f,-3.78470898e-01f,
+7.57316202e-02f,-2.90439129e-01f,+2.18672752e-01f,+3.71888846e-01f,+1.02747858e-01f,
+4.32782680e-01f,+2.04005003e-01f,-3.99946123e-01f,+4.55009341e-01f,+2.19411761e-01f,
-2.12317109e-02f,+1.37393132e-01f,+3.70010078e-01f,-3.19947213e-01f,+1.28277290e+00f,
-1.99735895e-01f,-2.73509473e-01f,+1.09783582e-01f,-3.53397764e-02f,+1.13303937e-01f,
-3.61297965e-01f,+2.33347416e-01f,-1.80334985e-01f,+1.52707279e-01f,+3.42780352e-03f,
+6.32608831e-02f,+2.41898894e-02f,+2.99580514e-01f,-1.71603024e-01f,-2.52655447e-01f,
+1.59068882e-01f,-3.72246057e-01f,+3.53626609e-02f,-3.33298713e-01f,-3.26777995e-01f,
+1.39842451e-01f,-4.16137278e-02f,+2.14447379e-02f,+1.57558978e-01f,+1.15108192e-02f,
-4.18554485e-01f,-2.94618845e-01f,-1.61004663e-01f,-4.23028886e-01f,-1.45695895e-01f,
+5.78829408e-01f,-7.62721077e-02f,-2.38895789e-01f,+5.62731445e-01f,-3.37247074e-01f,
-1.14559315e-01f,-3.16819668e-01f,-1.51217133e-01f,+1.08675301e-01f,+1.81240663e-01f,
-1.88092366e-01f,-4.54637647e-01f,+4.71696436e-01f,+6.81480408e-01f,+2.95215219e-01f,
-3.93363416e-01f,-2.72443056e-01f,-5.05630560e-02f,-1.47675261e-01f,-2.20544636e-02f,
+5.69233954e-01f,+1.99050345e-02f,-5.07011116e-01f,+5.47253847e-01f,+8.45417902e-02f,
+2.16812506e-01f,+3.63847762e-01f,+1.77516818e-01f,-3.82934868e-01f,+2.42565811e-01f,
+2.46147975e-01f,-3.63379657e-01f,+4.93382066e-01f,+2.71745741e-01f,+6.01676367e-02f,
+1.90751195e-01f,-3.23619902e-01f,-3.36107850e-01f,+6.35264516e-02f,+7.31054246e-02f,
+1.60569966e-01f,+2.16999233e-01f,-1.58733994e-01f,+2.83240199e-01f,-3.27821791e-01f,
+3.02019298e-01f,-2.59487629e-01f,+1.99249387e-03f,+2.66158104e-01f,-3.69277000e-02f,
-2.66685247e-01f,-1.10017359e-02f,-1.63782820e-01f,+1.98666513e-01f,-1.60807669e-02f,
-2.50490452e-03f,-9.71474051e-02f,+4.35325444e-01f,+5.26583374e-01f,-2.08428606e-01f,
-5.54924369e-01f,+5.36279798e-01f,+5.29675424e-01f,-4.32843976e-02f,+5.04801452e-01f,
+3.93196642e-01f,+2.58417130e-01f,+1.54760838e-01f,-2.14841366e-01f,-7.05333531e-01f,
+2.29198948e-01f,+2.70253301e-01f,-2.74177343e-01f,-3.25155020e-01f,-2.31014356e-01f,
-8.74655321e-03f,-1.50551498e-02f,+4.05012537e-03f,-3.05317372e-01f,+3.33922565e-01f,
-5.84077239e-02f,+9.25113782e-02f,+1.23815224e-01f,-2.61290461e-01f,-3.39814574e-02f,
+3.12435925e-01f,-3.34582061e-01f,-1.53675377e-02f,+2.50941098e-01f,+9.56868827e-02f,
+3.42468053e-01f,-1.81605309e-01f,+3.77389908e-01f,+1.03944466e-01f,-1.31824255e-01f,
+3.07409573e+00f,+5.09924293e-02f,+2.06522703e+00f,+2.12006521e+00f,+1.11015826e-01f,
-1.25939751e+00f,+1.57126606e+00f,+9.45638120e-01f,-6.52047992e-01f,+1.70849931e+00f,
-1.67662585e+00f,-8.78150082e+00f,-1.94573581e-01f,+1.78484619e-01f,-1.02330387e+00f,
+2.40813088e+00f,+1.50945747e+00f,-1.19746113e+00f,-4.08502936e-01f,+4.93896306e-02f,
+4.96285766e-01f,+2.60388494e-01f,+4.60518807e-01f,+1.93384454e-01f,+9.14428830e-02f,
-2.29091316e-01f,+4.59416509e-01f,+2.08219051e-01f,-3.40524584e-01f,+3.13008636e-01f,
+4.48306315e-02f,+6.19813144e-01f,-2.71022320e-04f,-2.22021654e-01f,-2.83210844e-01f,
+5.33028781e-01f,+7.47353971e-01f,-2.04276964e-01f,-1.50319301e-02f,+8.81002471e-02f,
+3.55604053e-01f,-3.23846787e-01f,+3.93226355e-01f,+2.62950212e-01f,-1.52533144e-01f,
+5.19790530e-01f,-1.06570132e-01f,+2.36443639e-01f,+4.73927110e-01f,-2.32362464e-01f,
+3.95923853e-01f,+8.71104524e-02f,-2.44330332e-01f,-1.75553471e-01f,+4.27157015e-01f,
-1.22133344e-01f,-1.36472806e-01f,+6.18516020e-02f,+4.63955015e-01f,-3.11751962e-02f,
+2.86535382e-01f,-2.14937776e-01f,-3.63653332e-01f,+5.08892834e-02f,-3.06337893e-01f,
-2.79976726e-01f,+1.37663662e-01f,-1.48103088e-01f,-3.46856952e-01f,+1.74942017e-02f,
-3.08071375e-01f,+2.54826903e-01f,-2.86110193e-01f,+1.23642087e-02f,-2.52584159e-01f,
+2.58778512e-01f,-1.68527305e-01f,-3.71584356e-01f,-1.59253478e-02f,-3.68390977e-01f,
+5.71174204e-01f,-3.35887432e-01f,+7.48670876e-01f,+4.77622837e-01f,+1.62589073e-01f,
-7.41951108e-01f,+2.23864496e-01f,+7.27365494e-01f,-9.37571824e-02f,+7.04029322e-01f,
+3.16594422e-01f,+6.48463845e-01f,+5.87154031e-02f,+2.67756879e-01f,-6.50010884e-01f,
+1.02041423e-01f,+7.84667432e-01f,-1.21301256e-01f,-2.53412277e-01f,+3.25618386e-01f,
-7.73143992e-02f,-9.91111696e-02f,+1.96635932e-01f,-7.51116797e-02f,-3.29565614e-01f,
-5.70892632e-01f,+6.56544492e-02f,+4.52797920e-01f,-3.06021553e-02f,+3.92216951e-01f,
-3.28873321e-02f,+3.86387944e-01f,-3.65155160e-01f,-2.16886401e-03f,-8.53095055e-01f,
+4.55494374e-01f,+7.25487530e-01f,-1.03882633e-01f,-2.52791315e-01f,-3.72172832e-01f,
+1.45732418e-01f,-2.86809921e-01f,-7.87951872e-02f,+2.01210767e-01f,+1.91050470e-01f,
-4.39492464e-01f,+1.02161705e-01f,+5.50804995e-02f,-3.82897824e-01f,-1.90387905e-01f,
-1.34568065e-01f,+4.63648260e-01f,+2.32268453e-01f,-3.32511693e-01f,-6.16004944e-01f,
-4.61818762e-02f,+6.62043914e-02f,-2.01151967e-01f,-4.56396222e-01f,-1.10985488e-01f,
-3.66748184e-01f,-1.92257628e-01f,+1.07228428e-01f,+1.58270657e-01f,+3.58603239e-01f,
+1.29146397e-01f,-1.96689814e-01f,+1.43493414e-01f,-2.67210662e-01f,+1.18349552e-01f,
+1.53464735e-01f,+2.47288525e-01f,+1.83485985e-01f,+1.18007362e-01f,+2.34700263e-01f,
+3.07816505e-01f,-1.15103036e-01f,-4.28923666e-02f,+1.19754136e-01f,+8.69409740e-02f,
-1.88691482e-01f,-3.43448818e-01f,+5.12144029e-01f,-1.42356291e-01f,+3.03828239e-01f,
+3.68486583e-01f,+5.24086654e-01f,-4.89543229e-01f,+1.84493795e-01f,+1.95482820e-01f,
-8.05927292e-02f,+7.74645954e-02f,-3.03155065e-01f,+1.57330632e-01f,+1.13065970e+00f,
-1.85870603e-01f,-1.32359400e-01f,-1.94888860e-01f,-2.08817959e-01f,-1.17060803e-01f,
+4.92511898e-01f,+1.95688546e-01f,-3.46080735e-02f,+5.83409011e-01f,-2.81142235e-01f,
+4.40791339e-01f,-1.92510813e-01f,+7.87339061e-02f,+4.73640025e-01f,+2.22810313e-01f,
-2.08882555e-01f,-1.33785397e-01f,-2.79606640e-01f,-1.02329105e-01f,+8.51534382e-02f,
+9.02187172e-03f,+1.33679286e-01f,+1.65830895e-01f,+5.20527959e-01f,+2.61332700e-03f,
}; 
k2c_tensor dense_9_kernel = {&dense_9_kernel_array[0],2,400,{20,20, 1, 1, 1}}; 
float dense_9_bias_array[20] = {
-8.77105258e-03f,+0.00000000e+00f,-6.92047626e-02f,+2.91614383e-02f,+0.00000000e+00f,
+4.51415956e-01f,-2.17311859e-01f,-3.34164560e-01f,+3.87395173e-01f,-1.45280063e-01f,
+1.26061767e-01f,-1.01512730e-01f,+0.00000000e+00f,+0.00000000e+00f,+4.11359727e-01f,
-2.64062919e-02f,-2.17553303e-01f,+2.83333153e-01f,+4.43007946e-01f,-7.53845945e-02f,
}; 
k2c_tensor dense_9_bias = {&dense_9_bias_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_9_fwork[420] = {0}; 

 
float dense_10_output_array[20] = {0}; 
k2c_tensor dense_10_output = {&dense_10_output_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_10_kernel_array[400] = {
+7.27262914e-01f,-2.22641259e-01f,+1.31601095e-01f,+7.09189996e-02f,+2.16131285e-01f,
-3.03361654e-01f,-4.13047135e-01f,-3.22383493e-01f,-2.43187919e-01f,-3.30157429e-01f,
-6.21969402e-02f,-2.89837897e-01f,+1.48749769e-01f,+1.40905797e-01f,+5.16078532e-01f,
-3.54091257e-01f,-1.78598925e-01f,-5.31818345e-02f,-2.05982164e-01f,+2.03754231e-02f,
+7.09806085e-02f,-3.07264715e-01f,-1.60661116e-01f,-2.56047904e-01f,-1.09796941e-01f,
+1.99781299e-01f,+9.10722315e-02f,-3.45780551e-01f,+3.80813777e-02f,+1.82800353e-01f,
+1.11511856e-01f,-3.67573053e-01f,-2.23264456e-01f,-1.44275993e-01f,-1.72786355e-01f,
-1.65567696e-02f,-3.15756112e-01f,-1.74757332e-01f,+3.52351844e-01f,+1.56649888e-01f,
+5.08132100e-01f,-2.63309419e-01f,-8.40238631e-02f,+5.01002312e-01f,+8.05509508e-01f,
-5.13554156e-01f,-5.70905171e-02f,-1.57316148e-01f,+1.48552909e-01f,-1.72796592e-01f,
+1.01648480e-01f,-5.37715554e-02f,+1.76934659e-01f,-2.83134222e-01f,+6.08135343e-01f,
+1.80454254e-01f,-1.02499619e-01f,-8.79209518e-01f,-2.17636019e-01f,-2.69931883e-01f,
+6.17006421e-01f,-2.33630717e-01f,-2.58030295e-01f,-1.34075925e-01f,+8.62481117e-01f,
+7.10609779e-02f,+2.67616749e-01f,-7.02609196e-02f,+1.98835552e-01f,-1.55397043e-01f,
-2.97250092e-01f,-2.89969116e-01f,+6.61833227e-01f,+3.15170527e-01f,+7.31243014e-01f,
+1.93598494e-01f,-5.79270832e-02f,-4.22893107e-01f,-2.52963126e-01f,-8.34095627e-02f,
+2.02728629e-01f,-3.37738752e-01f,+5.24866581e-02f,-8.25126767e-02f,+2.17001200e-01f,
+1.14385664e-01f,-5.71339130e-02f,-1.57157391e-01f,+2.33376205e-01f,-1.69195190e-01f,
+2.20879912e-01f,-1.76107332e-01f,-2.75346488e-01f,+3.03504288e-01f,-4.51162457e-02f,
-3.11425626e-02f,-7.12605119e-02f,+9.58140194e-02f,+4.45133746e-02f,-1.95624232e-02f,
+3.63280386e-01f,+3.25181186e-01f,+1.20684850e+00f,-1.15351319e+00f,+5.57086766e-01f,
+9.99411643e-01f,-3.85620862e-01f,+1.24506943e-01f,-3.44213933e-01f,+1.17110014e-01f,
-2.56425649e-01f,-3.30468148e-01f,+5.91239274e-01f,-3.41550559e-01f,+5.51073074e-01f,
-4.05700028e-01f,-6.02183156e-02f,+9.56380188e-01f,-5.09133041e-02f,-3.68465662e-01f,
-7.33578131e-02f,-4.31438982e-02f,-1.07846963e+00f,+5.82014740e-01f,+6.85761571e-01f,
-9.65654612e-01f,-6.98534846e-02f,-1.41298816e-01f,-3.57397825e-01f,-1.77330270e-01f,
-3.81097227e-01f,-3.26953530e-02f,+5.18311083e-01f,-2.74378836e-01f,-8.07213336e-02f,
+2.42464706e-01f,-1.91786394e-01f,-8.43809783e-01f,+1.37728155e-01f,-4.12955463e-01f,
+1.98274702e-01f,-1.49215311e-01f,-6.49263382e-01f,+1.25107312e+00f,-3.34795237e-01f,
-4.76734787e-01f,+1.19216248e-01f,-2.20459759e-01f,-1.78431943e-02f,+2.13929355e-01f,
-2.13870421e-01f,-1.52485073e-02f,-1.31810054e-01f,-1.72986165e-01f,-2.57197857e-01f,
+2.49357700e-01f,+7.43162856e-02f,-8.79350483e-01f,-3.42602968e-01f,-6.59668073e-02f,
+5.32567382e-01f,-1.37325823e-01f,+7.00872764e-02f,-2.20800608e-01f,+5.46624839e-01f,
+2.33879551e-01f,+2.03998789e-01f,-7.70613477e-02f,+3.21149290e-01f,-8.27900469e-02f,
-1.08978540e-01f,-2.48330653e-01f,+2.05233231e-01f,-2.33552262e-01f,+2.58117586e-01f,
-3.21553737e-01f,+3.01449895e-01f,+6.38286412e-01f,-2.71160305e-01f,+3.82013708e-01f,
+3.58861059e-01f,+1.80976570e-01f,-6.21989787e-01f,+6.46665037e-01f,+4.91337389e-01f,
-4.84399945e-01f,-4.69613284e-01f,+1.87011674e-01f,+2.52976827e-02f,+4.33888733e-02f,
-2.27754906e-01f,-2.38214344e-01f,+5.07320046e-01f,-2.17754290e-01f,+3.24532568e-01f,
+1.71455309e-01f,-9.28534195e-02f,-1.08550155e+00f,+9.80520546e-02f,-1.45656601e-01f,
-4.41868633e-01f,-2.12212756e-01f,+2.01735392e-01f,+1.99527726e-01f,-5.30839026e-01f,
+2.52289891e-01f,+6.67789340e-01f,-2.28155464e-01f,+6.68772459e-01f,-3.78070712e-01f,
+8.41771215e-02f,+2.36897409e-01f,-3.77014399e-01f,+1.19224854e-01f,-4.06902254e-01f,
-1.95975900e-02f,+8.07586730e-01f,+6.66237026e-02f,-1.13596320e-01f,+1.82546273e-01f,
-6.23270869e-01f,-1.34782255e-01f,+1.39166087e-01f,+1.19789386e+00f,-5.37403047e-01f,
+2.29623795e-01f,+5.78120470e-01f,-3.31964105e-01f,+7.16396689e-01f,-1.00706995e-01f,
-2.98846185e-01f,+1.41910851e-01f,-5.82961857e-01f,+3.08564395e-01f,-8.55123699e-01f,
-2.98011988e-01f,+7.46485770e-01f,+1.22700214e-01f,-3.05043042e-01f,+8.79430711e-01f,
-1.98467612e-01f,+3.02806854e-01f,-1.17373466e-01f,+1.77291572e-01f,+6.08212054e-02f,
+7.04247355e-02f,+2.27553248e-02f,-8.84993970e-02f,+2.24594593e-01f,+3.05092692e-01f,
+3.66245210e-01f,-3.71455729e-01f,+1.54563308e-01f,-1.34694576e-03f,-2.48633236e-01f,
-3.84933621e-01f,-2.21057639e-01f,-3.73868048e-02f,-3.34216923e-01f,-1.22660249e-01f,
+3.76148462e-01f,+1.94455028e-01f,+1.38848305e-01f,-1.80592239e-02f,-3.07623535e-01f,
-1.50694579e-01f,+2.84620523e-02f,+1.91160083e-01f,+1.80519104e-01f,+2.33460844e-01f,
-1.25141680e-01f,+3.00594211e-01f,+5.10256886e-02f,-2.85157710e-01f,+3.30350578e-01f,
+3.70687485e-01f,-3.73905212e-01f,+3.43619347e-01f,+3.35933328e-01f,-4.12189960e-02f,
-4.19530153e+00f,+3.77913296e-01f,+4.62298822e+00f,-4.51178759e-01f,-4.20701075e+00f,
+4.58398724e+00f,+4.11468458e+00f,+2.73964137e-01f,+4.47414255e+00f,-1.77478462e-01f,
+8.87709036e-02f,-8.16360116e-03f,-4.11937428e+00f,+2.40527064e-01f,-3.87230968e+00f,
+9.37180966e-02f,+4.17931509e+00f,+4.55143595e+00f,+7.46958852e-02f,+4.22699261e+00f,
+8.31897795e-01f,-6.99985027e-03f,-3.54059994e-01f,+1.41032726e-01f,+5.06021321e-01f,
-3.72197747e-01f,-3.59646022e-01f,-2.40236089e-01f,-3.48350227e-01f,-2.31537297e-01f,
+5.93660176e-02f,-1.11084253e-01f,+2.61510730e-01f,-2.59581149e-01f,+7.49934852e-01f,
+7.34524429e-02f,-1.26108110e-01f,-5.60777009e-01f,+2.65980601e-01f,-1.52887627e-01f,
+1.59906626e-01f,+4.06873822e-02f,-6.38845444e-01f,+9.86532032e-01f,-1.16271429e-01f,
-7.01014102e-01f,+1.52289271e-01f,-2.19552338e-01f,+2.46806473e-01f,-2.46811673e-01f,
+3.83173168e-01f,-1.31616116e-01f,+3.16873163e-01f,-2.68140018e-01f,+3.17835689e-01f,
+2.84997642e-01f,+2.36815289e-01f,-8.63714814e-01f,-3.71600062e-01f,-2.38393843e-01f,
+3.93493801e-01f,-1.98677182e-03f,+9.60773468e-01f,-4.88796890e-01f,+5.73556684e-02f,
+4.27440912e-01f,-2.31748238e-01f,-3.32045615e-01f,-2.54522145e-01f,-2.87182420e-01f,
+3.60907376e-01f,-1.32564902e-01f,+2.69075245e-01f,+3.69128913e-01f,-1.03101097e-01f,
-1.50840476e-01f,+1.36012793e-01f,+6.69237494e-01f,+3.66566539e-01f,+2.35170424e-01f,
+2.33961105e-01f,-3.07198048e-01f,+7.48666823e-01f,-5.42004049e-01f,+3.76900993e-02f,
+5.16882956e-01f,+3.70682895e-01f,+1.86916694e-01f,-2.45940208e-01f,-1.23039395e-01f,
+1.75561711e-01f,+1.47322834e-01f,+5.45742214e-01f,-2.45587490e-02f,+1.05933733e-01f,
-3.11570585e-01f,-2.61698008e-01f,+5.67372918e-01f,+2.86207795e-01f,+2.72333622e-01f,
+2.24212766e-01f,-3.78606200e-01f,-2.73581445e-01f,-4.55804020e-02f,+1.71453997e-01f,
-1.06190637e-01f,-1.66458681e-01f,+2.26482395e-02f,-1.29702836e-01f,-5.11154234e-02f,
-2.56577641e-01f,+3.40071201e-01f,+2.06090242e-01f,+1.44743145e-01f,+1.65832485e-03f,
+1.81438208e-01f,-2.71899253e-01f,+1.73533142e-01f,-2.72891819e-01f,-3.07469040e-01f,
}; 
k2c_tensor dense_10_kernel = {&dense_10_kernel_array[0],2,400,{20,20, 1, 1, 1}}; 
float dense_10_bias_array[20] = {
+1.29648641e-01f,+0.00000000e+00f,+4.35240924e-01f,-1.12739027e-01f,+1.43671393e-01f,
+3.41263294e-01f,+7.41635486e-02f,-7.04706460e-02f,+6.39334023e-02f,+0.00000000e+00f,
-4.70989995e-04f,+0.00000000e+00f,+1.69431791e-01f,-5.00097685e-03f,+1.96582779e-01f,
-2.71639973e-02f,+7.41354823e-02f,+2.99944043e-01f,+0.00000000e+00f,+1.19831152e-01f,
}; 
k2c_tensor dense_10_bias = {&dense_10_bias_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_10_fwork[420] = {0}; 

 
//float dense_11_output_array[1] = {0}; 
//k2c_tensor dense_11_output = {&dense_11_output_array[0],1,1,{1,1,1,1,1}}; 
float dense_11_kernel_array[20] = {
+8.90492737e-01f,-2.11780190e-01f,-4.07247400e+00f,-1.61327684e+00f,+7.09078193e-01f,
-3.71524739e+00f,-1.07522607e+00f,+1.71231821e-01f,-1.15284061e+00f,-1.37124270e-01f,
+3.11498225e-01f,+3.25699151e-01f,+1.18316734e+00f,+3.58713657e-01f,+1.27340937e+00f,
-1.72082424e-01f,-8.59549761e-01f,-6.62309790e+00f,-4.46184069e-01f,-4.32596177e-01f,
}; 
k2c_tensor dense_11_kernel = {&dense_11_kernel_array[0],2,20,{20, 1, 1, 1, 1}}; 
float dense_11_bias_array[1] = {
+1.41641721e-01f,}; 
k2c_tensor dense_11_bias = {&dense_11_bias_array[0],1,1,{1,1,1,1,1}}; 
float dense_11_fwork[40] = {0}; 

 
k2c_dense(&dense_8_output,input_layer_2_input,&dense_8_kernel, 
	&dense_8_bias,k2c_relu,dense_8_fwork); 
k2c_dense(&dense_9_output,&dense_8_output,&dense_9_kernel, 
	&dense_9_bias,k2c_relu,dense_9_fwork); 
k2c_dense(&dense_10_output,&dense_9_output,&dense_10_kernel, 
	&dense_10_bias,k2c_relu,dense_10_fwork); 
k2c_dense(dense_11_output,&dense_10_output,&dense_11_kernel, 
	&dense_11_bias,k2c_sigmoid,dense_11_fwork); 

 } 
 

void MLPModel:: keras2c_model_initialize() { 

    cout << "Inicializando o Modleo MLP" <<  endl;

} 

void MLPModel::keras2c_model_terminate() { 

    cout << "Finalizando o Modleo MLP" << endl;

} 

