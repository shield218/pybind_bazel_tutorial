#include <iostream>

// #include <locale> // include the system locale header, fmt may include its own header and return error without this line.
#include <fmt/core.h>   // sudo apt-get install libfmt-dev

#include "chef/foreplay.h"
#include "chef/cook.h"


int main(int argc, char **argv) {
    
    std::cout << fmt::format("Baking {} gives: {}", std::stoi(argv[1]), chef::cook::bake(std::stoi(argv[1]))) << std::endl;
    std::cout << fmt::format("Kneading {} gives: {}", argv[2], chef::foreplay::knead(std::stoi(argv[2]))) << std::endl;
    return 0;
}