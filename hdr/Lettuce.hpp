#pragma once

#include <Item.hpp>

class Lettuce : public Item {
  const std::string name() override { return "Lettuce" }
};
