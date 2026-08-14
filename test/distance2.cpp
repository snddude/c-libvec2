#include <gtest/gtest.h>
#include <cmath>

extern "C"
    #include "vec2.h"

// Distance^2 = (x2 - x1)^2 + (y2 - y1)^2
#define distance2(v1, v2) ( pow(((v2).x - (v1).x), 2) + pow(((v2).y - (v1).y), 2) )

TEST(DistanceSquared, Vec2I)
{
    vec2i_t ivec1 = {   6, 7 };
    vec2i_t ivec2 = { -12, 1 };

    EXPECT_EQ(distance2(ivec1, ivec2), vec2_distance2(ivec1, ivec2));
    EXPECT_EQ(vec2_distance2(ivec1, ivec2), vec2_distance2(ivec2, ivec1));
}

TEST(DistanceSquared, Vec2F)
{
    vec2f_t fvec1 = { 13.5f, -9.0f };
    vec2f_t fvec2 = { -4.2f, 0.13f };

    EXPECT_NEAR(distance2(fvec1, fvec2), vec2_distance2(fvec1, fvec2), 0.01f);
    EXPECT_NEAR(vec2_distance2(fvec1, fvec1), vec2_distance2(fvec2, fvec2), 0.01f);
}

TEST(DistanceSquared, Mixed)
{
    vec2i_t ivec1 = {   6, 7 };
    vec2i_t ivec2 = { -12, 1 };
    vec2f_t fvec1 = { 13.5f, -9.0f };
    vec2f_t fvec2 = { -4.2f, 0.13f };

    EXPECT_NEAR(distance2(ivec1, fvec1), vec2_distance2(ivec1, fvec1), 0.01f);
    EXPECT_NEAR(distance2(ivec1, fvec2), vec2_distance2(ivec1, fvec2), 0.01f);
    EXPECT_NEAR(distance2(fvec1, ivec1), vec2_distance2(fvec1, ivec1), 0.01f);
    EXPECT_NEAR(distance2(fvec1, ivec2), vec2_distance2(fvec1, ivec2), 0.01f);
}

TEST(DistanceSquared, BetweenZeroVectors)
{
    EXPECT_EQ(0, vec2_distance2(VEC2I_ZERO, VEC2I_ZERO));
    EXPECT_EQ(0.0f, vec2_distance2(VEC2I_ZERO, VEC2F_ZERO));
    EXPECT_EQ(0.0f, vec2_distance2(VEC2F_ZERO, VEC2I_ZERO));
    EXPECT_EQ(0.0f, vec2_distance2(VEC2F_ZERO, VEC2F_ZERO));
}
