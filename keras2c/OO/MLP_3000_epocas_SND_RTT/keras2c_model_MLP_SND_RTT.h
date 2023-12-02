#pragma once 

#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 

class MLP_SND_RTTModel : public Model
{
    public:
        MLP_SND_RTTModel(){};
        ~MLP_SND_RTTModel(){}
        void keras2c_model(const k2c_tensor* dense_8_input_input, k2c_tensor* dense_11_output); 
        
        void keras2c_model_initialize(); 
        void keras2c_model_terminate(); 
};
