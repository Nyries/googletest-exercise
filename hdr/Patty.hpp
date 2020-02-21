#pragma once

#include <Item.hpp>

class Patty : public Item {
  const std::string name() override { return "Patty" }
};
