# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(robotics-cmake)

# creates the variable EXEC and sets it to hello
set(EXEC robotics)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 11)

# I../includes
include_directories(source)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES source/*.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})
