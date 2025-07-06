// user_main.cpp
#include "MathUtils.h"
#include <iostream>

int main()
{
  MathUtils::print_version();
  std::cout << "10 + 5 = " << MathUtils::add(10, 5) << std::endl;
  return 0;
}
