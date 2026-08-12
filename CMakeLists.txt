cmake_minimum_required(VERSION 3.18)
project(CUDAImageProcessing LANGUAGES CXX CUDA)

add_executable(cuda_app src/main.cpp src/grayscale.cu src/sobel.cu)
