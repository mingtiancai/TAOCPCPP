#include "v1.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(EuclidAlgorithm, t1)
{
    ASSERT_EQ(2, EuclidAlgorithm(2, 2));
}

TEST(EuclidAlgorithm, t2)
{
    ASSERT_EQ(1, EuclidAlgorithm(3, 10));
}

TEST(EuclidAlgorithm, t3)
{
    ASSERT_EQ(5, EuclidAlgorithm(10, 5));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}