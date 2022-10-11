#include "gpu.h"

void gpu_display(std::vector<int> vec){
    if(vec.size()!=8) return;
    for(int i=0;i<vec.size();++i){
        std::cout << vec.at(i) << "\t";
    }
    std::cout << std::endl;
}