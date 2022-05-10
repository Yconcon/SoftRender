 cmake_minimum_required(VERSION 3.10)
 project(Rasterizer)

 set(CMAKE_CXX_STANDARD 17)

 add_executable(Rasterizer main.cpp Rasterizer.h tgaimage.h tgaimage.cpp)