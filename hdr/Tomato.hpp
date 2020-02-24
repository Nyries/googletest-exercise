#pragma once

#include <Item.hpp>

class Tomato : public Item {
public:
  const std::string name() override { return "Tomato"; }
};
