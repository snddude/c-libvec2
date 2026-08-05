#include <gtest/gtest.h>

extern "C"
    #include "vec2.h"

TEST(Constants, vec2i_zero)
{
    EXPECT_EQ((VEC2I_ZERO).x, 0);
    EXPECT_EQ((VEC2I_ZERO).y, 0);
}

TEST(Constants, vec2i_one)
{
    EXPECT_EQ((VEC2I_ONE).x, 1);
    EXPECT_EQ((VEC2I_ONE).y, 1);
}

TEST(Constants, vec2i_up)
{
    EXPECT_EQ((VEC2I_UP).x,  0);
    EXPECT_EQ((VEC2I_UP).y, -1);
}

TEST(Constants, vec2i_left)
{
    EXPECT_EQ((VEC2I_LEFT).x, -1);
    EXPECT_EQ((VEC2I_LEFT).y,  0);
}

TEST(Constants, vec2i_down)
{
    EXPECT_EQ((VEC2I_DOWN).x, 0);
    EXPECT_EQ((VEC2I_DOWN).y, 1);
}

TEST(Constants, vec2i_right)
{
    EXPECT_EQ((VEC2I_RIGHT).x, 1);
    EXPECT_EQ((VEC2I_RIGHT).y, 0);
}

TEST(Constants, vec2f_zero)
{
    EXPECT_EQ((VEC2F_ZERO).x, 0);
    EXPECT_EQ((VEC2F_ZERO).y, 0);
}

TEST(Constants, vec2f_one)
{
    EXPECT_EQ((VEC2F_ONE).x, 1);
    EXPECT_EQ((VEC2F_ONE).y, 1);
}

TEST(Constants, vec2f_up)
{
    EXPECT_EQ((VEC2F_UP).x,  0);
    EXPECT_EQ((VEC2F_UP).y, -1);
}

TEST(Constants, vec2f_left)
{
    EXPECT_EQ((VEC2F_LEFT).x, -1);
    EXPECT_EQ((VEC2F_LEFT).y,  0);
}

TEST(Constants, vec2f_down)
{
    EXPECT_EQ((VEC2F_DOWN).x, 0);
    EXPECT_EQ((VEC2F_DOWN).y, 1);
}

TEST(Constants, vec2f_right)
{
    EXPECT_EQ((VEC2F_RIGHT).x, 1);
    EXPECT_EQ((VEC2F_RIGHT).y, 0);
}
