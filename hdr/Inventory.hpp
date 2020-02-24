#pragma once

#include <Item.hpp>
#include <vector>

class Inventory {
public:
  using Quantity = size_t;
  Item *get(const std::string &name) {
    Item *result{nullptr};
    for (auto it = items.begin(); it != items.end(); it++) {
      if (it->first->name() == name) {
        result = it->first;
        it->second--;
        if (it->second == 0) {
          items.erase(it);
        }
      }
    }
    return result;
  }
  void add(Item &item) {
    for (auto it = items.begin(); it != items.end(); it++) {
      if (it->first->name() == item.name()) {
        it->second++;
        return;
      }
    }
    items.emplace(std::make_pair<Item *, Quantity>(&item, 1));
  }

private:
  std::map<Item *, Quantity> items{};
};