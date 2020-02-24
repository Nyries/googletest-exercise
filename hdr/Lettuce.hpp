#pragma once

#include <Item.hpp>

class Lettuce : public Item {
public:
  const std::string name() override { return "Lettuce"; }
};
