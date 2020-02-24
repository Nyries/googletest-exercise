#pragma once

#include <Item.hpp>

class Bun : public Item {
public:
  const std::string name() override { return "Bun"; }
};
