# googletest-exercise
## Google Test Advanced Topics
### Exercise 1: In test/TestInventory.cpp:18
- Run this particular test with `--gtest_filter`
- Replace assertion above with an `EXPECT_EQ`
- Run again and compare output
- Replace assertion above with an `ASSERT_THAT`. Clue: Use gMock matcher, `IsTrue`
- Run again and compare output

Reference: [Asserting using gmock matchers](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#asserting-using-gmock-matchers)

### Exercise 2: In test/TestInventory.cpp: 49
- Add scope traces here
- Fix 'items' above so test doesn't fail

Reference: [Adding traces to assertions](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#adding-traces-to-assertions)
