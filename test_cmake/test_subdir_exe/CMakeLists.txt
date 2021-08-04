project(printHello)

add_definitions("-DCMAKE_DEFINE -DCMAKE_DEFINE_USE_SHARED")

add_library(printshared SHARED mathfunc.h mathfunc.cpp)

add_executable(printHello main.cpp)
target_link_libraries(printHello printshared)

set(INSTALL_EXE_DLL printHello printshared)
install(TARGETS ${INSTALL_EXE_DLL}
        CONFIGURATIONS Debug
        RUNTIME DESTINATION Debug/bin)
install(TARGETS ${INSTALL_EXE_DLL}
        CONFIGURATIONS Release
        RUNTIME DESTINATION Release/bin)