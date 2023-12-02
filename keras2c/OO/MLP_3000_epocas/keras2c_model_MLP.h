#pragma once 

#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 

class MLPModel : public Model
{
    public:
        MLPModel(){};
        ~MLPModel(){}
        void keras2c_model(const k2c_tensor* dense_68_input_1_input, k2c_tensor* dense_70_1_output); 
        void keras2c_model_initialize(); 
        void keras2c_model_terminate(); 
};
