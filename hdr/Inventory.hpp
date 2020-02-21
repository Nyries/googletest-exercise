#pragma once

#include <vector>
#include <Item.hpp>

class Inventory
{
public:
  Item* get(const std::string& name) {
    for (item : items) {
      if (item.name == name)
      {
        items.erase(item);
        return item;
      }
    }
    return nullptr;
  }
  void add(const Item &item) { items.add(item) }
private:
  std::vector<Item> items{}
};