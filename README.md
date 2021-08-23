# Conanical

## About

I have some experience in using conan. However, the packages I created and used so far are not open source and were completely under my control. I'm interested in how easy it is, to get some well established libraries running and working together.

The code snippets used are from tutorials and I'll probably merge them together.

## Content

A list of used libraries:

- OpenCV 4.5.2 (BSD-3)
- Boost 1.76.0 (BSL-1.0)
- GTest 1.11.0 (BSD-3)
- CMake 3.21.1 (BSD-3)

## Build

Tested with Ubuntu 20.04

~~~sh
sudo apt-get install libgtk2.0-dev #Needed for OpenCV build
sudo apt-get install python3-numpy #Needed for Boost build
sudo pip3 install conan
mkdir build
cd build
conan install .. --build=missing
conan build ..
~~~
