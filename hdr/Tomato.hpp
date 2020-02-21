#pragma once

#include <Item.hpp>

class Tomato : public Item {
  const std::string name() override { return "Tomato" }
};
