// MathUtils.h
#ifndef MATHUTILS_H
#define MATHUTILS_H

#ifdef _WIN32
#ifdef MATHUTILS_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif
#else
#define MATH_API
#endif

#include <stdexcept>

class MATH_API MathUtils
{
public:
  static int add(int a, int b);
  static int subtract(int a, int b);
  static int multiply(int a, int b);
  static double divide(int a, int b);
  static double sqrt(double value);
  static void print_version();
};

#endif // MATHUTILS_H
