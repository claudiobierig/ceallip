cmake_minimum_required(VERSION 3.1)
project(ceallip CXX)

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS)
endif()
find_package(OpenCV REQUIRED)

add_executable(ceallip ceallip.cpp)
target_link_libraries(ceallip opencv::opencv_core opencv::opencv_imgcodecs opencv::opencv_highgui)
