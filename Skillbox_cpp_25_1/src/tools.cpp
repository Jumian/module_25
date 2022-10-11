#include "tools.h"
#include <iostream>

void scalpel(std::vector<coord> &coords){
    if(coords.size()!=2) return;
    std::cout <<"scalpel cut from ";
    print_coord( coords.front());
    std::cout<<" to ";
    print_coord(coords.at(1));
    std::cout<<std::endl;
}

void hemostat(std::vector<coord> &coords){
    if(coords.size()!=1) return;
    std::cout<<"hemostat on ";
    print_coord(coords.front());
    std::cout<<std::endl;
}

void tweezers(std::vector<coord> &coords){
    if(coords.size()!=1) return;
    std::cout<<"tweezers on ";
    print_coord(coords.front());
    std::cout<<std::endl;
}

void suture(std::vector<coord> &coords){
    if(coords.size()!=2) return;
    std::cout <<"sature from ";
    print_coord(coords.front());
    std::cout<< " to ";
    print_coord(coords.at(1));
    std::cout<< std::endl;
}

void execute_command(struct my_command &my_command){
    switch(my_command.cmd) {
        case SCALPEL:
            scalpel(my_command.coords);
            break;
        case HEMOSTAT:
            hemostat(my_command.coords);
            break;
        case TWEEZERS:
            tweezers(my_command.coords);
            break;
        case SUTURE:
            suture(my_command.coords);
            break;
        case NONE:
        default:
            break;
    }
}

enum command input_command(){
    std::cout << "Available commands: ";
    for(int i=0;i<command_str.size();i++){
        std::cout << command_str[i]<<" ";
    };
    std::cout << std::endl;
    std::string command_input = input_string("Input command:");
    enum command command_out=NONE;
    if(command_input == command_str[SCALPEL]) command_out = SCALPEL;
    else if(command_input == command_str[SUTURE]) command_out = SUTURE;
    else if(command_input == command_str[TWEEZERS]) command_out = TWEEZERS;
    else if(command_input == command_str[HEMOSTAT]) command_out = HEMOSTAT;
    else if(command_input == command_str[FINISH]) command_out = FINISH;
    return command_out;
}

void input_comm_coords(std::vector<coord> &coords,int count){
    coords.clear();
    if (count==1)
    coords.push_back(input_coords("point"));
    else if (count==2){
        coords.push_back(input_coords("begin"));
        coords.push_back(input_coords("end"));
    }
}

void fill_command(struct my_command &my_command){
    do {
        my_command.cmd = input_command();
    }while(my_command.cmd==NONE);
    switch(my_command.cmd){
        case SCALPEL:
        case SUTURE:
            input_comm_coords(my_command.coords,2);
            break;
        case HEMOSTAT:
        case TWEEZERS:
            input_comm_coords(my_command.coords,1);
            break;
        case FINISH:
            break;
        case NONE:
        default:
            break;
    }
}