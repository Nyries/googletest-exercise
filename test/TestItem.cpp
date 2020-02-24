#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <Item.hpp>

#include <Bun.hpp>
#include <Cheese.hpp>
#include <Lettuce.hpp>
#include <Onion.hpp>
#include <Patty.hpp>
#include <Tomato.hpp>

using ::testing::ContainsRegex;
using ::testing::Test;
using ::testing::Types;

template <typename T>
class TestItem : public Test {
public:

};

/*
 * Exercise #3
 * - Associate a list of types with the `TestItem` test suite (e.g Bun, Cheese, etc.)
 * Reference: [Typed tests](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#typed-tests)
 */
//using ItemTypes = Types<...>;
//TYPED_TEST_SUITE(..., ...);
//
//TYPED_TEST(TestItem, ReturnsName)
//{
//  TypeParam item{};
//  EXPECT_THAT(item.name(), ContainsRegex("t"));
//}
