#pragma once

#include <Item.hpp>

class Bun : public Item {
  const std::string name() override { return "Bun" }
};
