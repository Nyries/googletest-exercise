#pragma once

#include <Item.hpp>

class Cheese : public Item {
  const std::string name() override { return "Cheese" }
};
