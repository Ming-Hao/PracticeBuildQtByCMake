cmake_minimum_required(VERSION 3.19.0)

project(helloworld)

list(APPEND CMAKE_PREFIX_PATH "D:/Qt/5.13.2/msvc2017_64")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
include_directories(${Qt5Core_INCLUDES} ${Qt5Widgets_INCLUDES})

set(SOURCES
    test_cmake/mainwindow.cpp
    test_cmake/main.cpp)

set(HEADERS
	test_cmake/mainwindow.h)

add_executable(helloworld ${SOURCES} ${HEADERS})

target_link_libraries(helloworld Qt5::Widgets Qt5::Core)