#include <filesystem>
#include <iostream>

#include "fmt/core.h"


int main(int argc, char** argv) {
    std::cout << std::filesystem::current_path() << std::endl;
    fmt::print("Hello World\n");

    return 0;
}