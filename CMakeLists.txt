project(mcu-test-example)
cmake_minimum_required(VERSION 2.6)

message("${CMAKE_CURRENT_SOURCE_DIR}/../conservify/arduino-cmake-minimal/cmake/")

set(ARDUINO_IDE "${CMAKE_CURRENT_SOURCE_DIR}/../../conservify/arduino-1.8.3")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/../../conservify/arduino-cmake-minimal/cmake/")

include(ArduinoMinimal)

set(SOURCE_FILES main.cpp)

set(LIBRARIES Wire)

include_directories(./)

arduino(mcu-test-example "${SOURCE_FILES}" "${LIBRARIES}")
