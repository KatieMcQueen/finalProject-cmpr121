cmake_minimum_required(VERSION 3.15)
project(projectSkeleton)

option(BUILD_EXAMPLES "Build examples." ON)

if(BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()

