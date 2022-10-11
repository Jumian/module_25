#pragma once

#include <iostream>
#include <fstream>
#include <vector>

#define FILEPATH "C:\\Users\\Azamat\\CLionProjects\\Skillbox\\module_25\\Skillbox_cpp_25_2\\resources\\data.txt"

std::vector<int> hdd_load();

bool hdd_save(std::vector<int> vec);
