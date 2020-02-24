#pragma once

#include <Item.hpp>

class Onion : public Item {
public:
  const std::string name() override { return "Onion"; }
};
