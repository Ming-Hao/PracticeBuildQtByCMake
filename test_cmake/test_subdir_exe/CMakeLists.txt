project(printHello)

add_definitions("-DCMAKE_DEFINE -DCMAKE_DEFINE_USE_SHARED")

add_library(printshared SHARED mathfunc.h mathfunc.cpp)

set_target_properties(printshared
    PROPERTIES
    PUBLIC_HEADER "mathfunc.h"
    )

add_executable(printHello main.cpp)
target_link_libraries(printHello printshared)

set(INSTALL_EXE_DLL printHello printshared)

install(TARGETS ${INSTALL_EXE_DLL}
        CONFIGURATIONS Debug
        RUNTIME DESTINATION Debug/bin
        ARCHIVE DESTINATION Debug/lib
        PUBLIC_HEADER DESTINATION Debug/include)

install(TARGETS ${INSTALL_EXE_DLL}
        CONFIGURATIONS Release
        RUNTIME DESTINATION Release/bin
        ARCHIVE DESTINATION Release/lib
        PUBLIC_HEADER DESTINATION Release/include)