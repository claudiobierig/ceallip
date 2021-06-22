cmake_minimum_required(VERSION 3.1)
project(conanical CXX)

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS)
endif()
find_package(OpenCV REQUIRED)

add_executable(conanical_01 conanical_01.cpp)
target_link_libraries(conanical_01 opencv::opencv_core opencv::opencv_imgcodecs opencv::opencv_highgui)
