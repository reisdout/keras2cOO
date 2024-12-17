cmake_minimum_required(VERSION 3.5.0)
project(Keras2c VERSION 0.1.0 LANGUAGES C CXX)
include_directories(header)

set(HEADER_DIR "./header")
set(SRC_DIR "./src")

add_library(${PROJECT_NAME} 
${SRC_DIR}/k2c_activations.cpp
${SRC_DIR}/k2c_convolution_layers.cpp
${SRC_DIR}/k2c_core_layers.cpp
${SRC_DIR}/k2c_embedding_layers.cpp
${SRC_DIR}/k2c_helper_functions.cpp
${SRC_DIR}/k2c_merge_layers.cpp
${SRC_DIR}/k2c_normalization_layers.cpp
${SRC_DIR}/k2c_pooling_layers.cpp
${SRC_DIR}/k2c_recurrent_layers.cpp
${SRC_DIR}/keras2c_model_MLP.cpp
)
