#include <gtest/gtest.h>

#include <vector>

#include <Inventory.hpp>
#include <Bun.hpp>
#include <Patty.hpp>
#include <Onion.hpp>
#include <Tomato.hpp>
#include <Lettuce.hpp>
#include <Cheese.hpp>


TEST(TestInventory, add)
{
  Inventory inventory{};
  Item* bun = new Bun();
  Item* patty = new Patty();
  Item* onion = new Onion();
  Item* tomato = new Tomato();
  Item* lettuce = new Lettuce();
  Item* cheese = new Cheese();

  inventory.add(*bun);
  inventory.add(*bun);
  inventory.add(*patty);
  inventory.add(*onion);
  inventory.add(*tomato);
  inventory.add(*lettuce);
  inventory.add(*cheese);

  std::vector<Item*> items = {bun, patty, onion, tomato, tomato, lettuce, bun, cheese};
  for (auto item : items)
  {
    // TODO: Add scope traces here
    EXPECT_TRUE(inventory.get(item->name()) != nullptr);
  }
}