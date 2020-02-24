#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

#include <Bun.hpp>
#include <Cheese.hpp>
#include <Inventory.hpp>
#include <Lettuce.hpp>
#include <Onion.hpp>
#include <Patty.hpp>
#include <Tomato.hpp>

TEST(TestInventory, addNothing) {
  Inventory inventory{};
  EXPECT_TRUE(inventory.get("Bun") == nullptr);
  /*
   * Exercise #1:
   * - Run this particular test with --gtest_filter
   * - Replace assertion above with an EXPECT_EQ
   * - Run again and compare output
   * - Replace assertion above with an ASSERT_THAT. Clue: Use gMock matcher, "IsTrue"
   * - Run again and compare output
   * Reference:
   * https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#asserting-using-gmock-matchers
   */
}
TEST(TestInventory, addVariousItems) {
  Inventory inventory{};
  Item *bun = new Bun();
  Item *patty = new Patty();
  Item *onion = new Onion();
  Item *tomato = new Tomato();
  Item *lettuce = new Lettuce();
  Item *cheese = new Cheese();

  inventory.add(*bun);
  inventory.add(*bun);
  inventory.add(*patty);
  inventory.add(*onion);
  inventory.add(*tomato);
  inventory.add(*lettuce);
  inventory.add(*cheese);

  std::vector<Item *> items = {bun,    bun,    patty,   onion,
                               tomato, tomato, lettuce, cheese};
  for (auto item : items) {
    /*
     * Exercise #2:
     * - Add scope traces here
     * - Fix "items" above so test doesn't fail
     * Reference:
     * https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#adding-traces-to-assertions
     */
    EXPECT_TRUE(inventory.get(item->name()) != nullptr);
  }
}