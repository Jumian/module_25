#pragma once

#include <iostream>
#include <fstream>
#include <vector>

#define FILEPATH "..\\..\\resources\\data.txt"

std::vector<int> hdd_load();

bool hdd_save(std::vector<int> vec);
