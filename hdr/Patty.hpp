#pragma once

#include <Item.hpp>

class Patty : public Item {
public:
  const std::string name() override { return "Patty"; }
};
