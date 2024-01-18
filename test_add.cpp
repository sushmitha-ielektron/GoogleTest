// test_add.cpp
#include "gtest/gtest.h"
extern "C" {
    #include "add.c"  // Include the C file
}

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
}

TEST(AddTest, Zero) {
    EXPECT_EQ(add(0, 0), 0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
