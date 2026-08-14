#include <gtest/gtest.h>

extern "C"
    #include "vec2.h"

TEST(Constants, Vec2I)
{
    EXPECT_EQ(0, VEC2I_ZERO.x);
    EXPECT_EQ(0, VEC2I_ZERO.y);
    EXPECT_EQ(1, VEC2I_ONE.x);
    EXPECT_EQ(1, VEC2I_ONE.y);

    EXPECT_EQ( 0, VEC2I_UP.x);
    EXPECT_EQ(-1, VEC2I_UP.y);
    EXPECT_EQ(-1, VEC2I_LEFT.x);
    EXPECT_EQ( 0, VEC2I_LEFT.y);
    EXPECT_EQ( 0, VEC2I_DOWN.x);
    EXPECT_EQ( 1, VEC2I_DOWN.y);
    EXPECT_EQ( 1, VEC2I_RIGHT.x);
    EXPECT_EQ( 0, VEC2I_RIGHT.y);
}

TEST(Constants, Vec2F)
{
    EXPECT_EQ(0.0f, VEC2F_ZERO.x);
    EXPECT_EQ(0.0f, VEC2F_ZERO.y);
    EXPECT_EQ(1.0f, VEC2F_ONE.x);
    EXPECT_EQ(1.0f, VEC2F_ONE.y);

    EXPECT_EQ( 0.0f, VEC2F_UP.x);
    EXPECT_EQ(-1.0f, VEC2F_UP.y);
    EXPECT_EQ(-1.0f, VEC2F_LEFT.x);
    EXPECT_EQ( 0.0f, VEC2F_LEFT.y);
    EXPECT_EQ( 0.0f, VEC2F_DOWN.x);
    EXPECT_EQ( 1.0f, VEC2F_DOWN.y);
    EXPECT_EQ( 1.0f, VEC2F_RIGHT.x);
    EXPECT_EQ( 0.0f, VEC2F_RIGHT.y);
}
