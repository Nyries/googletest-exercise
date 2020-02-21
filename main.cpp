#include <Calculator.hpp>
#include <iostream>

int main() {
  Calculator calculator{};
  std::cout << "calculator.add(4, 2) = " << calculator.add(4, 2);
  return 0;
}
