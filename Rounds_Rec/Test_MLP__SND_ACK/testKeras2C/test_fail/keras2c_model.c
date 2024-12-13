#include <math.h> 
 #include <string.h> 
#include "./include/k2c_include.h" 
#include "./include/k2c_tensor_include.h" 

 


void keras2c_model(k2c_tensor* input_layer_8_input, k2c_tensor* keras_tensor_449_output) { 

float dense_32_output_array[20] = {0}; 
k2c_tensor dense_32_output = {&dense_32_output_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_32_kernel_array[40] = {
-4.74001020e-01f,+8.12169462e-02f,-1.30492389e-01f,-2.98999637e-01f,+4.90423024e-01f,
+2.24269331e-01f,-3.94516766e-01f,-1.41204715e-01f,-1.69638574e-01f,+3.49517405e-01f,
-4.87749904e-01f,+5.03754973e-01f,-1.31245643e-01f,+8.00878167e-01f,+2.33243272e-01f,
+2.00586125e-01f,+4.95568991e-01f,-4.98634934e-01f,-6.69205263e-02f,-6.57787919e-02f,
+9.00887907e-01f,+6.75369859e-01f,+7.41625607e-01f,+7.52340436e-01f,+9.28206682e-01f,
-4.74478871e-01f,-1.93116695e-01f,-2.29624391e-01f,-2.34367490e-01f,+9.48168159e-01f,
-4.70344007e-01f,+8.40083718e-01f,-3.44448447e-01f,-4.09514427e-01f,-9.22118947e-02f,
+4.53624308e-01f,-4.14590120e-01f,-3.79873395e-01f,+5.55627048e-01f,-3.28378916e-01f,
}; 
k2c_tensor dense_32_kernel = {&dense_32_kernel_array[0],2,40,{ 2,20, 1, 1, 1}}; 
float dense_32_bias_array[20] = {
-1.72989890e-02f,-4.96080667e-01f,-4.57705796e-01f,-3.01856875e-01f,-2.71655798e-01f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,-2.69459724e-01f,
+0.00000000e+00f,-6.28461123e-01f,+0.00000000e+00f,+3.23653311e-01f,+7.49487281e-01f,
-3.41776282e-01f,+3.30250084e-01f,+0.00000000e+00f,-3.72760117e-01f,+0.00000000e+00f,
}; 
k2c_tensor dense_32_bias = {&dense_32_bias_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_32_fwork[42] = {0}; 

 
float dense_33_output_array[20] = {0}; 
k2c_tensor dense_33_output = {&dense_33_output_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_33_kernel_array[400] = {
-7.27221727e-01f,+3.33188951e-01f,-1.00490928e+00f,+1.18768680e+00f,-3.64144206e-01f,
-5.11234641e-01f,+1.28238344e+00f,+8.54407847e-01f,+1.08874869e+00f,+1.79499090e-02f,
+1.42922080e+00f,-2.94966340e-01f,-1.61483392e-01f,-5.70553184e-01f,-2.11827233e-01f,
-1.73478663e-01f,-1.04426414e-01f,-1.75789133e-01f,+1.29175735e+00f,+1.34329244e-01f,
-5.96050397e-02f,-3.26176062e-02f,-7.45476596e-03f,-1.85879618e-01f,-3.82359505e-01f,
-1.72666609e-01f,-3.74306738e-01f,+1.79615781e-01f,+5.50008416e-01f,-3.82909268e-01f,
-2.53114313e-01f,+7.74042308e-01f,-2.02620283e-01f,-1.12690911e-01f,+4.55119312e-02f,
-3.65894586e-01f,-1.79538459e-01f,-3.60329777e-01f,+6.21258952e-02f,-2.71390033e+00f,
+6.41470253e-01f,-7.03291297e-02f,+5.12967408e-02f,+8.22184980e-03f,-7.00081885e-02f,
+2.99882650e-01f,-1.83758020e-01f,+8.01230664e-04f,+1.41034532e+00f,+3.60053301e-01f,
-3.80744487e-01f,+8.23762238e-01f,+4.53956723e-02f,+2.31338903e-01f,+2.49600410e-03f,
-2.52103806e-01f,-1.51675969e-01f,+1.71102941e-01f,-2.30716601e-01f,-1.78229678e+00f,
+2.89964020e-01f,+4.44346815e-02f,-3.89711738e-01f,+7.34457433e-01f,+1.47002533e-01f,
+1.87484920e-01f,+5.46373904e-01f,+3.57210517e-01f,+1.44004786e+00f,+1.41471624e-04f,
+7.35351920e-01f,+1.06277287e-01f,-5.34478128e-02f,-1.21356487e-01f,-2.13030875e-01f,
-6.49891868e-02f,+1.10188097e-01f,-2.93063879e-01f,+1.50066212e-01f,-8.66787076e-01f,
-2.20955595e-01f,+1.28949165e-01f,+1.37306988e-01f,+6.63632095e-01f,-3.98740321e-01f,
+3.06972489e-02f,+5.39254785e-01f,+5.29835761e-01f,-2.97370881e-01f,-3.26944202e-01f,
+5.22189140e-01f,+7.87309483e-02f,-3.39172393e-01f,+9.25593600e-02f,-3.45547587e-01f,
-3.39428723e-01f,-1.42192826e-01f,-2.06707162e-03f,+3.28479916e-01f,-6.02949262e-01f,
-1.34838849e-01f,+2.57437944e-01f,+2.15346634e-01f,-1.56720355e-01f,-7.86529779e-02f,
+2.94871986e-01f,-5.26339412e-02f,+3.62517297e-01f,-7.95446038e-02f,+1.50078058e-01f,
-2.76748389e-01f,+3.45618486e-01f,-3.57162923e-01f,-8.62899721e-02f,+2.84498513e-01f,
-2.76505440e-01f,-3.35668951e-01f,+3.71259689e-01f,-4.74056900e-02f,-2.93199599e-01f,
+2.06500113e-01f,-9.51175094e-02f,+6.18022084e-02f,-3.26009721e-01f,+9.00784731e-02f,
-3.61770689e-02f,-1.55396402e-01f,+3.64778042e-01f,+2.80416846e-01f,+2.05260515e-01f,
+7.04785585e-02f,+1.72864020e-01f,-1.54059142e-01f,+1.83782578e-02f,-2.21829593e-01f,
-5.76017797e-02f,-4.87213433e-02f,-2.98288316e-01f,+1.28537416e-03f,-2.49944553e-01f,
-2.38138065e-01f,+3.10446024e-02f,-1.83114573e-01f,-2.64199585e-01f,+2.66976774e-01f,
-1.42534390e-01f,-3.04876864e-02f,+2.77073503e-01f,+3.53377163e-02f,-5.46311438e-02f,
+3.16292405e-01f,-2.94865131e-01f,+3.73191953e-01f,-1.40972435e-02f,-3.86826217e-01f,
+3.36126804e-01f,+1.57933295e-01f,-3.72077912e-01f,+1.01416707e-01f,+5.47994971e-02f,
+3.69516313e-01f,+2.39397407e-01f,+2.95529902e-01f,+1.05909467e-01f,+2.05996394e-01f,
-3.54358315e-01f,+1.15180433e-01f,+2.46937633e-01f,-2.64005393e-01f,+3.42582405e-01f,
-1.79631084e-01f,+2.36411154e-01f,+1.03713930e-01f,-9.42270756e-02f,-3.82411957e-01f,
+1.40898526e-01f,+2.30893791e-01f,+1.84588850e-01f,+2.43159354e-01f,-3.60047787e-01f,
+1.90044895e-01f,-2.15520248e-01f,+2.17367411e-01f,+7.54016280e-01f,+9.85963345e-02f,
+6.47038370e-02f,+6.16838098e-01f,+6.64546251e-01f,+4.30820704e-01f,-1.13380611e-01f,
+3.31477314e-01f,-1.98369548e-01f,-2.14632690e-01f,-2.85800517e-01f,-2.73177356e-01f,
+2.39301130e-01f,-2.83211827e-01f,-2.44318128e-01f,+7.49623895e-01f,-6.93468094e-01f,
-7.23016262e-03f,+1.73581779e-01f,+1.91128016e-01f,-2.30068177e-01f,-2.26567879e-01f,
+3.37046444e-01f,-2.48714134e-01f,+1.95167065e-01f,-2.84318984e-01f,+2.02886522e-01f,
+3.15049887e-02f,-1.59444824e-01f,-1.96488053e-01f,+1.33785069e-01f,+2.36074448e-01f,
-2.29060486e-01f,-5.72051108e-02f,+3.53134155e-01f,+1.38734996e-01f,-3.46558690e-01f,
-1.68957680e-01f,-1.14626996e-01f,+2.44840652e-01f,-1.66324213e-01f,+3.92515883e-02f,
-2.13133078e-02f,+1.15624860e-01f,+3.32077175e-01f,-2.47319072e-01f,-2.60829568e-01f,
+5.16758263e-01f,-3.76156755e-02f,+2.80138552e-02f,-2.37738714e-02f,-3.02662909e-01f,
+2.98758119e-01f,+1.77789211e-01f,+2.37686455e-01f,-3.61610688e-02f,-2.11972499e+00f,
+1.85805559e-03f,+2.24556088e-01f,-1.76915571e-01f,+1.65961683e-01f,+3.24990571e-01f,
-7.65225291e-02f,+2.91041017e-01f,-5.68207800e-02f,-7.56699741e-02f,-1.25921756e-01f,
+3.87140751e-01f,+3.19536865e-01f,+1.93024576e-01f,+1.83892965e-01f,+3.28851938e-02f,
+3.59621644e-01f,-1.44122809e-01f,+2.93443859e-01f,-1.53531328e-01f,+2.01161504e-01f,
+1.06245565e+00f,-3.35993171e-01f,+4.55256909e-01f,-7.71603227e-01f,-2.21987605e-01f,
+1.06693709e+00f,-3.98073167e-01f,-6.62913084e-01f,-1.07174087e+00f,+1.73281550e-01f,
-5.03224015e-01f,+7.69657552e-01f,+2.85546839e-01f,+6.78357780e-01f,-1.01667225e-01f,
+1.48645043e-01f,+3.15140963e-01f,-5.01182191e-02f,-6.84513450e-01f,+1.52899653e-01f,
+4.40708339e-01f,+1.52148917e-01f,+4.97530669e-01f,-7.34655410e-02f,+1.61338568e-01f,
+7.83364102e-02f,+3.73416767e-02f,+2.99558580e-01f,-1.11896001e-01f,-2.61908650e-01f,
+2.95156360e-01f,+1.20165803e-01f,-4.24583554e-02f,+6.92563355e-01f,-1.62098929e-01f,
-1.87600911e-01f,-1.49839804e-01f,+3.06210890e-02f,-1.49029577e-02f,+1.21343756e+00f,
-3.07627022e-01f,-3.16764981e-01f,-2.71132976e-01f,+1.95743099e-01f,+2.62032032e-01f,
+1.73361868e-01f,+5.54817617e-01f,+3.52913290e-01f,+2.53354549e-01f,+1.97711170e-01f,
-4.90369163e-02f,+2.58599401e-01f,-2.86956549e-01f,-2.59334356e-01f,-1.62048325e-01f,
+3.30871791e-01f,+7.07204938e-02f,-3.81784976e-01f,+6.74184635e-02f,-2.66920376e+00f,
+8.37384045e-01f,-2.74801105e-01f,+9.07237411e-01f,-8.17584097e-01f,+2.50757009e-01f,
+6.84995234e-01f,-8.96215439e-01f,-3.37655336e-01f,-1.18220627e+00f,-9.36076641e-02f,
-3.04026037e-01f,+5.97611129e-01f,-1.17817253e-01f,+6.06081188e-01f,+3.55646014e-02f,
-1.87184036e-01f,-3.18745673e-01f,+1.60695583e-01f,-4.15872604e-01f,+7.54922748e-01f,
-1.95433632e-01f,-3.00492734e-01f,-6.17218614e-02f,+9.37853456e-02f,-2.83206105e-01f,
-7.54236877e-02f,+3.22378695e-01f,+3.51498127e-01f,+2.28543282e-01f,+1.54224873e-01f,
+1.91183746e-01f,+2.01735616e-01f,-3.45557272e-01f,+2.68345535e-01f,-3.85659933e-02f,
+7.34102428e-02f,-1.44517466e-01f,+3.38216960e-01f,+1.33820355e-01f,+3.25011015e-01f,
+1.13438046e+00f,+2.54016727e-01f,+7.55089998e-01f,-5.71425915e-01f,-3.56497258e-01f,
+1.01849735e+00f,-4.12435442e-01f,-9.00141776e-01f,+2.57030368e+00f,-3.11350167e-01f,
-1.01176357e+00f,+1.06732094e+00f,-1.00248426e-01f,+7.97529817e-01f,-1.84485435e-01f,
-3.78818929e-01f,+1.59841299e-01f,+1.62837446e-01f,-3.57953906e-01f,-3.19513226e+00f,
-1.05683059e-01f,-1.33742958e-01f,+3.67086351e-01f,-1.93206131e-01f,-2.62941360e-01f,
+1.96479201e-01f,-3.01456660e-01f,+2.78080761e-01f,+2.70862937e-01f,-3.57560217e-02f,
-3.27497035e-01f,+2.99688578e-01f,-1.36204541e-01f,+2.39552677e-01f,+2.78510392e-01f,
+2.81485915e-01f,-1.15335912e-01f,+1.86033845e-01f,+1.59411430e-02f,-1.48927495e-01f,
}; 
k2c_tensor dense_33_kernel = {&dense_33_kernel_array[0],2,400,{20,20, 1, 1, 1}}; 
float dense_33_bias_array[20] = {
+1.50948390e-01f,-2.84662098e-02f,+3.60061526e-01f,+3.10720891e-01f,-2.02140249e-02f,
+2.61351705e-01f,+2.66525865e-01f,+1.56816393e-01f,+5.57601564e-02f,+0.00000000e+00f,
+1.18210390e-01f,+6.91229403e-02f,+0.00000000e+00f,+1.87951341e-01f,+0.00000000e+00f,
-1.54317506e-02f,+0.00000000e+00f,-1.20802608e-03f,+3.03511113e-01f,+1.28255320e+00f,
}; 
k2c_tensor dense_33_bias = {&dense_33_bias_array[0],1,20,{20, 1, 1, 1, 1}}; 
float dense_33_fwork[420] = {0}; 

 
float dense_35_output_array[1] = {0}; 
k2c_tensor dense_35_output = {&dense_35_output_array[0],1,1,{1,1,1,1,1}}; 
float dense_35_kernel_array[20] = {
-9.31719542e-01f,+1.15982270e+00f,-4.93550748e-01f,+7.65584588e-01f,+2.91052520e-01f,
-6.72657073e-01f,+9.80674982e-01f,+6.75107181e-01f,+5.94131899e+00f,-1.18559182e-01f,
+6.85488999e-01f,-9.33488548e-01f,+2.45596170e-01f,-8.19725811e-01f,+4.90318716e-01f,
+2.04290479e-01f,-2.91244060e-01f,+3.40323746e-01f,+1.02465451e+00f,-1.40700083e+01f,
}; 
k2c_tensor dense_35_kernel = {&dense_35_kernel_array[0],2,20,{20, 1, 1, 1, 1}}; 
float dense_35_bias_array[1] = {
+6.97122887e-02f,}; 
k2c_tensor dense_35_bias = {&dense_35_bias_array[0],1,1,{1,1,1,1,1}}; 
float dense_35_fwork[40] = {0}; 

 
k2c_dense(&dense_32_output,input_layer_8_input,&dense_32_kernel, 
	&dense_32_bias,k2c_relu,dense_32_fwork); 
k2c_dense(&dense_33_output,&dense_32_output,&dense_33_kernel, 
	&dense_33_bias,k2c_relu,dense_33_fwork); 
k2c_dense(&dense_35_output,&dense_33_output,&dense_35_kernel, 
	&dense_35_bias,k2c_sigmoid,dense_35_fwork); 

 } 

void keras2c_model_initialize() { 

} 

void keras2c_model_terminate() { 

} 

