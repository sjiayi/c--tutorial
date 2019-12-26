cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

add_subdirectory(library)

# add the executable
add_executable(Tutorial tutorial.cpp)
target_link_libraries(Tutorial myLibrary)