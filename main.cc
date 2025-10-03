#include <filesystem>
#include <iostream>

#include "fmt/core.h"
#include "cxxopts.hpp"


int main(int argc, char **argv) {
    fmt::print("Hello World\n");
    std::cout << std::filesystem::current_path() << std::endl;

    cxxopts::Options options(
        "SourceTokenizer", "Tokenizing your source code to feed it to LLMs"
    );

    options.add_options()
            ("d, dir", "Directory path", cxxopts::value<std::filesystem::path>())
            ("o, output", "Output to specified file", cxxopts::value<std::string>())
            ("v,verbose", "Verbose output", cxxopts::value<bool>()->default_value("false"));

    auto result = options.parse(argc, argv);

    return 0;
}
