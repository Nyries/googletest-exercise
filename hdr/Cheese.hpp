#pragma once

#include <Item.hpp>

class Cheese : public Item {
public:
  const std::string name() override { return "Cheese"; }
};
