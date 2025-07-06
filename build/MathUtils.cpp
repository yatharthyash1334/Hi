// MathUtils.cpp
#include "MathUtils.h"
#include <cmath>
#include <iostream>

int MathUtils::add(int a, int b)
{
  return a + b;
}

int MathUtils::subtract(int a, int b)
{
  return a - b;
}

int MathUtils::multiply(int a, int b)
{
  return a * b;
}

double MathUtils::divide(int a, int b)
{
  if (b == 0)
    throw std::invalid_argument("Division by zero");
  return static_cast<double>(a) / b;
}

double MathUtils::sqrt(double value)
{
  if (value < 0)
    throw std::invalid_argument("Square root of negative number");
  return std::sqrt(value);
}

void MathUtils::print_version()
{
  std::cout << "MathUtils Version 1.0" << std::endl;
}
