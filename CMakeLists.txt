cmake_minimum_required(VERSION 2.8)

project(GTestCpp)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set (sources
    main.cpp
    soundextext.cpp
    )

add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(GTestCpp gmock)
target_link_libraries(GTestCpp gtest)

