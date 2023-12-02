#ifdef _WIN32
#define DllExport __declspec( dllexport )
#else
#define DllExport
#endif

#include <string>
#include <iostream>

DllExport void showMessage(const std::string& msg)
{
    std::cout << msg << std::endl;
}