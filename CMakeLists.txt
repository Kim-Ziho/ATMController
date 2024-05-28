cmake_minimum_required(VERSION 3.11)

project(
  ATMController
  VERSION 0
  DESCRIPTION "project for an assessment"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(source)
add_subdirectory(tests)
