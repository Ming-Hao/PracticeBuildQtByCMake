#include <iostream>

int main(int argc, char* argv[])
{
    
#if defined(CMAKE_DEFINE)
    std::cout << "Hello CMake! Use DEFINE" << std::endl;
#else
    std::cout << "Hello CMake! NOT USE DEFINE" << std::endl;
#endif

    return 0;
}