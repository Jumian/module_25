#pragma once
#include "tools.h"

void input_operation(std::vector<my_command> &commands);

void execute_operation(std::vector<my_command> &operation);

bool isValidOperation(std::vector<my_command> &operation);