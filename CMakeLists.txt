cmake_minimum_required(VERSION 3.15)
project(projectSkeleton)

option(BUILD_EXAMPLES "Build examples." ON)

if(BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()


#our main executable test runner section
#adds the person type library as a target
add_library(PersonType src/PersonType.cpp "src/CandidateList.cpp")

#add the Candidate type library as a target
add_library(CandidateType src/CandidateType.cpp "src/CandidateList.cpp")

#add our main executable as a target
add_executable(main src/Main.cpp "src/CandidateList.cpp")

#include this directory to the compiler. tells it where to search for includes
#this saves us from `#include "../examples/doctest.h"`
target_include_directories(main PRIVATE external)

#links our libraries together
target_link_libraries(main PRIVATE PersonType)
target_link_libraries(main PRIVATE CandidateType)

