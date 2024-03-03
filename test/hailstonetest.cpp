#include "gtest/gtest.h"
#include "../lib/Hailstone.h"
using sequence::satisfiesHailstone;

/*
Hailstone sequence: For any positive integer number, 
if it is even, it is divided by 2.
 If it is odd, it is multiplied by 3 and then added by 1. 
 Finally, number always becomes 1.
 Specially, when number is equal to zero, return false.
The HailstoneTests should cover each logical branch
*/
TEST(HailstoneTests, returnFalseWhenZero) {
    EXPECT_FALSE(satisfiesHailstone(0));
}

TEST(HailstoneTests, returnTrueWhenOne) {
    EXPECT_TRUE(satisfiesHailstone(1));
}

TEST(HailstoneTests, returnTrueWhenEven) {
    EXPECT_TRUE(satisfiesHailstone(100));
    EXPECT_TRUE(satisfiesHailstone(666));
}

TEST(HailstoneTests, returnTrueWhenOdd) {
    EXPECT_TRUE(satisfiesHailstone(99));
    EXPECT_TRUE(satisfiesHailstone(777));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}