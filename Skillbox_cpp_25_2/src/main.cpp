#include <iostream>
#include "cpu.h"
#include "hdd.h"
#include "memory.h"
#include "keyborad.h"
#include "gpu.h"

int main() {
    std::string command_str;
    bool run=true;
    std::vector<int> vector;
    do {
        std::cout << "Input command[sum,save,load,input,display,exit]:";
        std::cin >> command_str;
        if (command_str == "sum") cpu_compute(mem_read());
        else if (command_str == "save") hdd_save(mem_read());
        else if (command_str == "load") mem_write(hdd_load());
        else if (command_str == "input") mem_write(kbd_vector_input());
        else if (command_str == "display") gpu_display(mem_read());
        else if (command_str == "exit") run = false;
    } while (run);
    std::cout << "Program finished!" << std::endl;
    return 0;
}
