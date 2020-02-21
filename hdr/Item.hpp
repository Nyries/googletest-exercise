#pragma once

#include <string>

class Item {
public:
  virtual const std::string name() = 0;
};
