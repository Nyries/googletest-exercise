#pragma once

#include <Item.hpp>

class Onion : public Item {
  const std::string name() override { return "Onion" }
};
