#include <iostream>

#if defined(CMAKE_DEFINE_USE_SHARED)
#include "mathfunc.h"
#endif

int main(int argc, char* argv[])
{

#if defined(CMAKE_DEFINE)
    std::cout << "Hello CMake! Use DEFINE" << std::endl;
#else
    std::cout << "Hello CMake! NOT Use DEFINE" << std::endl;
#endif

#if defined(CMAKE_DEFINE_USE_SHARED)
    std::cout << "Hello CMake! Use SHARED" << std::endl;
    std::cout << add(2.718, 3.141) << std::endl;
#endif
    return 0;
}