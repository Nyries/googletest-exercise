#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Calculator.hpp>

using ::testing::Test;
using ::testing::Types;

template <class T>
Calculator<T>* createCalculator();

template <>
Calculator<int>* createCalculator()
{
  return new Calculator<int>(5, 4);
}
template <>
Calculator<double>* createCalculator()
{
  return new Calculator<double>(5.0, 4.0);
}

template <typename T>
class TestCalculator : public Test {
public:
  TestCalculator() : m_calculator(createCalculator<T>()) {}
  Calculator<T>* m_calculator{};
};

/*
 * Exercise #4
 * - Associate a list of types (`int` and `double`) with the `TestCalculator`
 * - Write test named `Add` under `TestCalculator` test suite
 * - `EXPECT_THAT` call to add is `Eq` to 9
 * Reference: [Typed tests](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#typed-tests)
 */

