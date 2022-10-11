cmake_minimum_required(VERSION 3.23)

set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/include)

add_executable(Skillbox_cpp_25_2 main.cpp hdd.cpp cpu.cpp memory.cpp keyboard.cpp gpu.cpp)

target_include_directories(Skillbox_cpp_25_2 PUBLIC ${MY_INCLUDE})

