#ifndef MATHFUNCT_H
#define MATHFUNCT_H

#ifdef _WIN32
#define DllExport __declspec( dllexport )
#else
#define DllExport
#endif

DllExport double add(double x, double y);

#endif