cmake_minimum_required(VERSION 3.19)

project(ChessScraper)

set(CMAKE_CXX_STANDARD 23)

add_executable(app
    src/main.cpp
)

target_include_directories(app PUBLIC
    src
)

include(FetchContent)
FetchContent_Declare(cpr
    GIT_REPOSITORY https://github.com/libcpr/cpr.git
    GIT_TAG 871ed52d350214a034f6ef8a3b8f51c5ce1bd400
)
FetchContent_MakeAvailable(cpr)

target_link_libraries(app PRIVATE cpr::cpr)
