cmake_minimum_required(VERSION 3.5.0)
project(Teste_MLP_SND_RTT VERSION 0.1.0 LANGUAGES C CXX)
include_directories(Keras2c)
add_subdirectory(Keras2c)


add_executable(Teste_MLP_SND_RTT 
main.cpp
#${HEADER_DIR}/k2c_include.h
#${HEADER_DIR}/k2c_tensor_include.h 
#${HEADER_DIR}/keras2c_model_MLP_SND_RTT.h
#${HEADER_DIR}/Model.h
#${SRC_DIR}/k2c_activations.c
#${SRC_DIR}/k2c_convolution_layers.c
#${SRC_DIR}/k2c_core_layers.c
#${SRC_DIR}/k2c_embedding_layers.c
#${SRC_DIR}/k2c_helper_functions.c
#${SRC_DIR}/k2c_merge_layers.c
#${SRC_DIR}/k2c_normalization_layers.c
#${SRC_DIR}/k2c_pooling_layers.c
#${SRC_DIR}/k2c_recurrent_layers.c
#${SRC_DIR}/keras2c_model_MLP_SND_RTT.cpp
)

target_link_libraries(${PROJECT_NAME} Keras2c)

