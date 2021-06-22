# Conanical

## About

I have some experience in using conan. However, the packages I created and used so far are not open source and were completely under my control. I'm interested in how easy it is, to get some well established libraries running and working together.

The code snippets used are from tutorials and I'll probably merge them together.

## Content

A list of used libraries:

- OpenCV 4.5.2

## Build

Tested with Ubuntu 20.04

~~~sh
sudo apt-get install libgtk2.0-dev
sudo pip3 install conan
mkdir build
cd build
conan install ..
conan build ..
~~~
