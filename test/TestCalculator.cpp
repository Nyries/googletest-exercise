#include <Calculator.hpp>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

bool isEven(int x)
{
  return (x % 2) == 0;
}

bool ofSameSize(const size_t x, const size_t y)
{
  return x == y;
}

namespace {
TEST(TestCalculator, add) {
  Calculator calculator{};

  std::vector<int> x{1, 2, 3, 4, 5, 6};
  std::vector<int> y{1, 2, 3, 4, 5};

//  ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";

  for (int i = 0; i < x.size(); ++i) {
    EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
  }

  ASSERT_PRED2(ofSameSize, x.size(), y.size());
}

void subroutine()
{
  FAIL(); // returns a fatal failure
  std::cout << "A";
}

TEST(PropagatingFatalFailures, example)
{
  subroutine();
  if (::testing::Test::HasFatalFailure()) {return;}
  std::cout << "B";
}

class ResourceSharing : public ::testing::Test {
protected:
  static void SetUpTestSuite() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
  static void TearDownTestSuite() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
  void SetUp() override { std::cout << __PRETTY_FUNCTION__ << std::endl; }
  void TearDown() override { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

TEST_F(ResourceSharing, test1) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}
TEST_F(ResourceSharing, test2) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}
} // namespace
