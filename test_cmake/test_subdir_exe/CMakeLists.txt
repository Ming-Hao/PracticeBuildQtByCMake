project(printHello)

add_definitions("-DCMAKE_DEFINE -DCMAKE_DEFINE_USE_SHARED")

add_library(printshared SHARED mathfunc.h mathfunc.cpp)

add_executable(printHello main.cpp)
target_link_libraries(printHello printshared)

