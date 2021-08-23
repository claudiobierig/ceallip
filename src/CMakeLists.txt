cmake_minimum_required(VERSION 3.9)
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
configure_file(${CONAN_OPENCV_ROOT}/res/haarcascades/haarcascade_eye_tree_eyeglasses.xml
               ${CMAKE_BINARY_DIR}/bin/data/haarcascades/haarcascade_eye_tree_eyeglasses.xml
               COPYONLY)
configure_file(${CONAN_OPENCV_ROOT}/res/haarcascades/haarcascade_frontalface_alt.xml
               ${CMAKE_BINARY_DIR}/bin/data/haarcascades/haarcascade_frontalface_alt.xml
               COPYONLY)

find_package(Boost REQUIRED)
add_executable(conanical_03 conanical_03.cpp)
target_link_libraries(conanical_03 Boost::program_options)

find_package(PythonLibs 3 REQUIRED)
python_add_module(conanical_04 conanical_04.cpp)
target_link_libraries(conanical_04 Boost::python38 ${PYTHON_LIBRARIES})
target_include_directories(conanical_04 PUBLIC ${PYTHON_INCLUDE_DIRS})

enable_testing()
find_package(GTest)
include(GoogleTest)
add_executable(conanical_05 conanical_05.cpp)
target_link_libraries(conanical_05 GTest::GTest)
gtest_discover_tests(conanical_05)

message(STATUS "Conanical 06. Use cmake from conan. CMake Version: ${CMAKE_VERSION}")