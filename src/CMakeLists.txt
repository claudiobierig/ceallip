cmake_minimum_required(VERSION 3.1)
project(conanical CXX)

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS)
endif()
find_package(OpenCV REQUIRED)

add_executable(conanical_01 conanical_01.cpp)
target_link_libraries(conanical_01 opencv::opencv_core opencv::opencv_imgcodecs opencv::opencv_highgui)

add_executable(conanical_02 conanical_02.cpp)
target_link_libraries(conanical_02 opencv::opencv_objdetect opencv::opencv_imgproc opencv::opencv_videoio opencv::opencv_highgui)