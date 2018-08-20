project(mcu-test-example)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_MODULE_PATH $ENV{CMAKE_MODULE_PATH})

include(Arduino)

enable_arduino_toolchain()

find_package(AUnit)

add_arduino_library(mcu-test-example main.cpp)

target_link_libraries(mcu-test-example AUnit)

add_arduino_firmware(mcu-test-example)
