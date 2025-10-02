cmake_minimum_required(VERSION 3.31)
project(SourceTokenizer)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

find_package(fmt QUIET)
if (NOT fmt_FOUND)
    FetchContent_Declare(
            fmt
            GIT_REPOSITORY https://github.com/fmtlib/fmt
            GIT_TAG         10.2.1
            GIT_SHALLOW     TRUE
    )
    FetchContent_MakeAvailable(fmt)
endif ()


add_executable(SourceTokenizer main.cc)
target_link_libraries(SourceTokenizer PRIVATE fmt::fmt)
