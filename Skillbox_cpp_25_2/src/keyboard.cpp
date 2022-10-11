#include "keyborad.h"

std::vector<int> kbd_vector_input(){
    std::vector<int> new_vector;
    std::cout << "Input 8 numbers:"<<std::endl;
    std::string input;
    std::stringstream stream;
    new_vector.resize(8);
    for(int i =0;i<8;++i){
        std::cout<<i+1<<":";
        std::cin >>input;
        new_vector[i] = std::stoi(input);
    }
    std::cout << "input end" << std::endl;
    return new_vector;
}