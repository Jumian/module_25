#include "hdd.h"


std::vector<int> hdd_load(){
    std::vector<int> vec;
    vec.resize(8);
    for (int i=0;i<8;++i) vec[i]=0;
    std::ifstream file(FILEPATH);
    if (!file.is_open()) return vec;
    for(int i=0;!file.eof()&&i<vec.size();++i){
        file>>vec[i];
    }
    return vec;
}

bool hdd_save(std::vector<int> vec){
    if(vec.size()!=8) return false;
    std::ofstream file(FILEPATH);
    if (!file.is_open()) return false;
    if (vec.size()==8){
        for(int i=0;i<vec.size();++i){
            file << vec[i]<<" ";
        }
        return true;
    }
    else return false;
}
