#pragma once

template <typename T> class Calculator {
public:
  Calculator(const T x, const T y) : m_x(x), m_y(y) {}
  T add() { return m_x + m_y; }
private:
  T m_x{};
  T m_y{};
};