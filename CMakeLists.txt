cmake_minimum_required(VERSION 3.19.0)

project(helloworld)

list(APPEND CMAKE_PREFIX_PATH "${QTDIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(SOURCES
    test_cmake/mainwindow.cpp
    test_cmake/main.cpp)

set(HEADERS
	test_cmake/mainwindow.h)

add_executable(helloworld ${SOURCES} ${HEADERS})

if(WIN32)
    set_target_properties(
        helloworld
        PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
)
elseif(APPLE)
    set_target_properties(helloworld PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_FRAMEWORK_IDENTIFIER org.mycompany.helloworld
)
endif()

target_link_libraries(helloworld Qt6::Widgets Qt6::Core)

add_subdirectory(test_cmake/test_subdir_exe)
add_subdirectory(test_cmake/test_subdir_dll)

if(WIN32)
    install(TARGETS ${PROJECT_NAME}
            CONFIGURATIONS Debug
            RUNTIME DESTINATION Debug/bin)

    install(TARGETS ${PROJECT_NAME}
            CONFIGURATIONS Release
            RUNTIME DESTINATION Release/bin)
elseif(APPLE)
    install(TARGETS ${PROJECT_NAME}
        BUNDLE DESTINATION . 
        RUNTIME DESTINATION bin)
endif()

find_program(WINDEPLOYQT_ENV_SETUP qtenv2.bat HINTS "${QTDIR}")
find_program(WINDEPLOYQT_EXECUTABLE windeployqt HINTS "${QTDIR}")

if(WIN32)
    install(CODE "execute_process(COMMAND deploy.bat ${CMAKE_INSTALL_PREFIX}/Release/bin ${WINDEPLOYQT_ENV_SETUP} ${WINDEPLOYQT_EXECUTABLE})")
endif()