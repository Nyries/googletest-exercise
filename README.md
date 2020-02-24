# googletest-exercise
## Environment Setup
1. Clone this repository with `git clone https://github.com/Nyries/googletest-exercise.git`
Note: Make sure you have *proxy* configured in your .git config.
Use this command, `git config --global --edit`, to check.
2. Create your build directory with `cd googletest-exercise && mkdir build`.
3. Run cmake with `cmake googletest-exercise`.
4. Build with `make -j 40 -l 48`.
5. Run test with `./test`.
## Google Test Advanced Topics
### Exercise 1: In test/TestInventory.cpp:18
- Run this particular test with `--gtest_filter`
- Replace assertion above with an `EXPECT_EQ`
- Run again and compare output
- Replace assertion above with an `ASSERT_THAT`. Clue: Use gMock matcher, `IsNull`
- Run again and compare output

Reference: [Asserting using gmock matchers](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#asserting-using-gmock-matchers)

### Exercise 2: In test/TestInventory.cpp: 49
- Add scope traces here
- Fix 'items' above so test doesn't fail

Reference: [Adding traces to assertions](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#adding-traces-to-assertions)

### Exercise 3: In test/TestItem.cpp: 23
- Associate a list of types with the `TestItem` test suite (e.g Bun, Cheese, etc.)

Reference: [Typed tests](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#typed-tests)

### Exercise 4: In test/TestCalculator.cpp:31
- Associate a list of types (`int` and `double`) with the `TestCalculator`
- Write test named `Add` under `TestCalculator` test suite
- `EXPECT_THAT` call to Calculator's add() is `Eq` to 9

Reference: [Typed tests](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#typed-tests)
