#include <gtest/gtest.h>

extern "C"
    #include "vec2.h"

// Dot product of a vector with itself
// is equal to it's length squared.
#define len2(v) ( (v).x * (v).x + (v).y * (v).y )

TEST(DotProduct, WithSelf)
{   
    vec2i_t ivec = { 13, -22 };
    EXPECT_EQ(len2(ivec), vec2_dot(ivec, ivec));

    vec2f_t fvec = {-0.15f, 8.924f};
    EXPECT_EQ(len2(fvec), vec2_dot(fvec, fvec));
}

TEST(DotProduct, WithZero)
{
    vec2i_t ivec1 = { 6, 32 };
    EXPECT_EQ(vec2_dot(ivec1, VEC2I_ZERO), 0);

    ivec1 = { -13, 21 };
    EXPECT_EQ(vec2_dot(ivec1, VEC2I_ZERO), 0);

    vec2f_t fvec1 = { -13.6f, 0.0f };
    EXPECT_EQ(vec2_dot(fvec1, VEC2F_ZERO), 0);

    fvec1 = { 22.15f, 21.0376f };
    EXPECT_EQ(vec2_dot(fvec1, VEC2F_ZERO), 0);
}

TEST(DotProduct, SameDirection)
{
    vec2i_t ivec1 = { 6, 12 };
    vec2i_t ivec2 = { 3,  8 };
    EXPECT_GT(vec2_dot(ivec1, ivec2), 0);

    ivec1 = { -1, 3 };
    ivec2 = {  8, 9 };
    EXPECT_GT(vec2_dot(ivec1, ivec2), 0);
    
    vec2f_t fvec1 = { 0.613f,  -13.8f };
    vec2f_t fvec2 = { 1.198f, -0.991f };
    EXPECT_GT(vec2_dot(fvec1, fvec2), 0);

    fvec1 = {   6.5f, 90.12 };
    fvec2 = { -11.58,   3.0 };
    EXPECT_GT(vec2_dot(fvec1, fvec2), 0);
}

TEST(DotProduct, OppositeDirection)
{
    vec2i_t ivec1 = { 3, -8 };
    vec2i_t ivec2 = { 6, 12 };
    EXPECT_LT(vec2_dot(ivec1, ivec2), 0);

    ivec1 = { 8, -2 };
    ivec2 = { -1, 3 };
    EXPECT_LT(vec2_dot(ivec1, ivec2), 0);
    
    vec2f_t fvec1 = { 1.198f, 0.991f };
    vec2f_t fvec2 = { 0.613f,  -13.8f };
    EXPECT_LT(vec2_dot(fvec1, fvec2), 0);

    fvec1 = { -11.58,    3.0 };
    fvec2 = {   6.5f, -90.12 };
    EXPECT_LT(vec2_dot(fvec1, fvec2), 0);
}

TEST(DotProduct, Perpendicular)
{
    EXPECT_EQ(0, vec2_dot(VEC2I_UP,    VEC2I_LEFT));
    EXPECT_EQ(0, vec2_dot(VEC2I_LEFT,  VEC2I_DOWN));
    EXPECT_EQ(0, vec2_dot(VEC2F_DOWN,  VEC2F_RIGHT));
    EXPECT_EQ(0, vec2_dot(VEC2F_RIGHT, VEC2F_UP));
}
