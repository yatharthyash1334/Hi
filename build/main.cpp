#include "MathUtils.h"
#include <iostream>

int main()
{
  MathUtils::print_version();

  try
  {
    int sum = MathUtils::add(10, 5);
    int diff = MathUtils::subtract(10, 5);
    int prod = MathUtils::multiply(10, 5);
    double quotient = MathUtils::divide(10, 5);
    double sqrt_val = MathUtils::sqrt(16.0);

    std::cout << "Sum: " << sum << ", Difference: " << diff << ", Product: " << prod << ", Quotient: " << quotient << ", Sqrt: " << sqrt_val << std::endl;
  }
  catch (const std::invalid_argument &e)
  {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}