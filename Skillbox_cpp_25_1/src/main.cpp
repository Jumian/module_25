#include <iostream>
#include "operation.h"

int main() {
    std::cout <<"Start plan of operation. The first command must be a SCALPEL, \nthe last command must be SUTURE, the coordinates must match."<<std::endl;
    std::vector<my_command> operation;
    input_operation(operation);
    if(isValidOperation(operation)) {
        std::cout << "Operation planned correctly"<<std::endl;
        execute_operation(operation);
    } else {
        std::cout << "Operation planned wrong! Cannot execute following commands:"<<std::endl;
        execute_operation(operation);
    }
    std::cout << "Program finished"<<std::endl;
}