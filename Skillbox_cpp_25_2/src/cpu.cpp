#include "cpu.h"

int cpu_compute(std::vector<int> vec){
    int sum=0;
    for(int i =0; i<vec.size();++i){
        sum+= vec.at(i);
    }
    std::cout<<sum<<std::endl;
    return sum;
}