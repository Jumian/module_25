#include "operation.h"

void input_operation(std::vector<my_command> &operation) {
    struct my_command new_command;
    do {
        fill_command(new_command);
        if(operation.empty()&&new_command.cmd!=SCALPEL){
            std::cout << "First command suppose to be SCALPEL"<<std::endl;
            continue;
        } else if (new_command.cmd ==FINISH && operation.back().cmd!=SUTURE){
            std::cout << "Operation cannot be finished with command - "<<command_str[operation.back().cmd]<<std::endl;
        } else if (new_command.cmd ==SUTURE &&
            isSameLine(operation.front().coords,operation.back().coords)) {
            operation.push_back(new_command);
            std::cout << "Operation finished" << std::endl;
            break;
        } else if (new_command.cmd == TWEEZERS||
                   new_command.cmd == HEMOSTAT) {
            if (isPointOnLine(operation.front().coords[0],
                              operation.front().coords[1],
                              new_command.coords[0]))
                std::cout << "==> Point on operation line!!! <==" << std::endl;
            else std::cout << "Point out off operation line!" << std::endl;
            operation.push_back(new_command);
        }
    else if (new_command.cmd != NONE&&
                new_command.cmd != FINISH)
            operation.push_back(new_command);
    }while(new_command.cmd!=FINISH);
}

void execute_operation(std::vector<my_command> &operation){
    for(std::vector<my_command>::iterator it=operation.begin();it!=operation.end();it++)
        execute_command(*it);
}

bool isValidOperation(std::vector<my_command> &operation){
    struct my_command   start= operation.front(),
                        end=operation.back();
    if (start.cmd==SCALPEL      &&
        end.cmd==SUTURE         &&
        isSameLine(start.coords,end.coords))
        return true;
    return false;
}