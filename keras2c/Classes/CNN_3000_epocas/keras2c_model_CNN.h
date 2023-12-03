#pragma once 
#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 

class CNNModel : public Model{
public:
CNNModel(){};
~CNNModel(){};
void keras2c_model(const k2c_tensor* conv2d_30_input_1_input, k2c_tensor* dense_61_1_output); 
void keras2c_model_initialize(); 
void keras2c_model_terminate(); 
};
