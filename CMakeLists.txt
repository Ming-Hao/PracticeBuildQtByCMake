cmake_minimum_required(VERSION 3.19.0)

project(helloworld)

list(APPEND CMAKE_PREFIX_PATH "${QTDIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SOURCES
    test_cmake/mainwindow.cpp
    test_cmake/main.cpp)

set(HEADERS
	test_cmake/mainwindow.h)

add_executable(helloworld ${SOURCES} ${HEADERS})

target_link_libraries(helloworld Qt5::Widgets Qt5::Core)
target_include_directories(helloworld PRIVATE ${Qt5Core_INCLUDES} ${Qt5Widgets_INCLUDES})

add_subdirectory(test_cmake/test_subdir_exe)
add_subdirectory(test_cmake/test_subdir_dll)