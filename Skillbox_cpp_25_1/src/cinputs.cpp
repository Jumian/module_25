#include "cinputs.h"

std::string input_string(const std::string &prompt){
    std::string input;
    std::cout << prompt;
    std::getline(std::cin,input);
    return input;
}

bool only_digits(std::string str,enum TYPES type){
    switch(type){
        case INT_T:
            for(int i=0;i<str.size();++i)
                if (str[i]>'9'||str[i]<'-'||str[i]=='.'||str[i]=='/') return false;
            break;
        case DOUBLE_T:
            for(int i=0;i<str.size();++i)
                if (str[i]>'9'||str[i]<'-'||str[i]=='/') return false;
            break;
        default:
            return false;
    }
    return true;
}

int input_int(const std::string &prompt){
    int input=-1;
    std::string input_str = input_string(prompt);
    if(only_digits(input_str,INT_T)) input = std::stoi(input_str);
    return input;
}

double input_double(const std::string &prompt){
    double input=-1;
    std::string input_str = input_string(prompt);
    if(only_digits(input_str,DOUBLE_T)) input = std::stoi(input_str);
    return input;
}