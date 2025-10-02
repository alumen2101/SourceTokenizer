#include <filesystem>
#include <iostream>

#include "fmt/core.h"
#include "cxxopts.hpp"


int main(int argc, char** argv) {
    fmt::print("Hello World\n");
    std::cout << std::filesystem::current_path() << std::endl;

    cxxopts::Options options("SourceTokenizer", "One line description of MyProgram");

    options.add_options()
      ("d,debug", "Enable debugging") // a bool parameter
      ("i,integer", "Int param", cxxopts::value<int>())
      ("f,file", "File name", cxxopts::value<std::string>())
      ("v,verbose", "Verbose output", cxxopts::value<bool>()->default_value("false"))
      ;

    auto result = options.parse(argc, argv);

    return 0;
}