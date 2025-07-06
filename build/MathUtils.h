// MathUtils.h
#ifndef MATHUTILS_H
#define MATHUTILS_H

#include <stdexcept>

class MathUtils
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
