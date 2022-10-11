#include "memory.h"

std::vector<float> mem_vector;

void mem_write(const std::vector<int> vec){
    mem_vector.resize(vec.size());
    for (int i=0;i<vec.size();++i) mem_vector[i]=vec[i];
}

std::vector<int> mem_read(){
    std::vector<int> vec;
    vec.resize(mem_vector.size());
    for (int i=0; i < mem_vector.size(); ++i) vec[i]=mem_vector[i];
    return vec;
}