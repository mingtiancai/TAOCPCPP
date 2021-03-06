#include "v1.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(EuclidAlgorithm, t_2_2)
{
    ASSERT_EQ(2, EuclidAlgorithm(2, 2));
}

TEST(EuclidAlgorithm, t_2_10)
{
    ASSERT_EQ(1, EuclidAlgorithm(3, 10));
}

TEST(EuclidAlgorithm, t_10_5)
{
    ASSERT_EQ(5, EuclidAlgorithm(10, 5));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}