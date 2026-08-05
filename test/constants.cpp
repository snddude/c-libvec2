#include <gtest/gtest.h>

extern "C"
    #include "vec2.h"

TEST(Constants, vec2i_zero)
{
    EXPECT_EQ(0, VEC2I_ZERO.x);
    EXPECT_EQ(0, VEC2I_ZERO.y);
}

TEST(Constants, vec2i_one)
{
    EXPECT_EQ(1, VEC2I_ONE.x);
    EXPECT_EQ(1, VEC2I_ONE.y);
}

TEST(Constants, vec2i_up)
{
    EXPECT_EQ( 0, VEC2I_UP.x);
    EXPECT_EQ(-1, VEC2I_UP.y);
}

TEST(Constants, vec2i_left)
{
    EXPECT_EQ(-1, VEC2I_LEFT.x);
    EXPECT_EQ( 0, VEC2I_LEFT.y);
}

TEST(Constants, vec2i_down)
{
    EXPECT_EQ(0, VEC2I_DOWN.x);
    EXPECT_EQ(1, VEC2I_DOWN.y);
}

TEST(Constants, vec2i_right)
{
    EXPECT_EQ(1, VEC2I_RIGHT.x);
    EXPECT_EQ(0, VEC2I_RIGHT.y);
}

TEST(Constants, vec2f_zero)
{
    EXPECT_EQ(0.0f, VEC2F_ZERO.x);
    EXPECT_EQ(0.0f, VEC2F_ZERO.y);
}

TEST(Constants, vec2f_one)
{
    EXPECT_EQ(1.0f, VEC2F_ONE.x);
    EXPECT_EQ(1.0f, VEC2F_ONE.y);
}

TEST(Constants, vec2f_up)
{
    EXPECT_EQ( 0.0f, VEC2F_UP.x);
    EXPECT_EQ(-1.0f, VEC2F_UP.y);
}

TEST(Constants, vec2f_left)
{
    EXPECT_EQ(-1.0f, VEC2F_LEFT.x);
    EXPECT_EQ( 0.0f, VEC2F_LEFT.y);
}

TEST(Constants, vec2f_down)
{
    EXPECT_EQ(0.0f, VEC2F_DOWN.x);
    EXPECT_EQ(1.0f, VEC2F_DOWN.y);
}

TEST(Constants, vec2f_right)
{
    EXPECT_EQ(1.0f, VEC2F_RIGHT.x);
    EXPECT_EQ(0.0f, VEC2F_RIGHT.y);
}
