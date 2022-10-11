#pragma once
#include "coords.h"
#include <vector>

enum command {
    SCALPEL,
    HEMOSTAT,
    TWEEZERS,
    SUTURE,
    FINISH,
    NONE=99
};

const std::vector<std::string> command_str = {
        "scalpel",
        "hemostat",
        "tweezers",
        "suture",
        "finish"
};

struct my_command{
    enum command cmd;
    std::vector<coord> coords;
};

void scalpel(std::vector<coord> &coords);

void hemostat(std::vector<coord> &coords);

void tweezers(std::vector<coord> &coords);

void suture(std::vector<coord> &coords);

void execute_command(struct my_command &my_command);

enum command input_command();

void input_comm_coords(std::vector<coord> &coords,int count);

void fill_command(struct my_command &my_command);

void execute_operation(std::vector<my_command> &operation);