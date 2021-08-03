#define DllExport   __declspec( dllexport )

#include <string>
#include <iostream>

DllExport void showMessage(const std::string& msg)
{
    std::cout << msg << std::endl;
}