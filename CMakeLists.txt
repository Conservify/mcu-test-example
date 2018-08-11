project(mcu-test-example)
cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/../arduino-cmake-minimal/cmake/")

include(ArduinoMinimal)

set(SOURCE_FILES main.cpp)

set(LIBRARIES Wire)

include_directories(./)

arduino(mcu-test-example "${SOURCE_FILES}" "${LIBRARIES}")
