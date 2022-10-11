#pragma once

#include <iostream>
#include <string>

enum TYPES {
    INT_T = 0,
    DOUBLE_T
};

std::string input_string(const std::string &prompt);

bool only_digits(std::string str,enum TYPES type);

int input_int(const std::string &prompt);

double input_double(const std::string &prompt);