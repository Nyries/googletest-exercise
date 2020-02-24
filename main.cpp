#include <Calculator.hpp>
#include <iostream>

int main() {
  std::cout << "calculator.add(4, 2) = " << Calculator<int>::add(4, 2);
  return 0;
}
