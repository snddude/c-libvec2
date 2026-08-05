#pragma once

#include <stdint.h>

#define VEC2I_ZERO  (vec2i_t){  0,  0 }
#define VEC2I_ONE   (vec2i_t){  1,  1 }
#define VEC2I_UP    (vec2i_t){  0, -1 }
#define VEC2I_LEFT  (vec2i_t){ -1,  0 }
#define VEC2I_DOWN  (vec2i_t){  0,  1 }
#define VEC2I_RIGHT (vec2i_t){  0,  1 }

#define VEC2F_ZERO  (vec2f_t){  0.0f,  0.0f }
#define VEC2F_ONE   (vec2f_t){  1.0f,  1.0f }
#define VEC2F_UP    (vec2f_t){  0.0f, -1.0f }
#define VEC2F_LEFT  (vec2f_t){ -1.0f,  0.0f }
#define VEC2F_DOWN  (vec2f_t){  0.0f,  1.0f }
#define VEC2F_RIGHT (vec2f_t){  0.0f,  1.0f }

#define vec2_dot(v1, v2)   ( (v1).x * (v2).x + (v1).y * (v2).y )
#define vec2_cross(v1, v2) ( (v1).x * (v2).y - (v1).y * (v2).x )

#define vec2_len2(v) vec2_dot(v, v)
#define vec2_normalize(v_p)                                      \
do                                                               \
{                                                                \
    /* https://en.wikipedia.org/wiki/Fast_inverse_square_root */ \
    long i;                                                      \
    float y = vec2_len2(*(v_p));                                 \
    float x2 = y * 0.5f;                                         \
    i = *(long *)&y;                                             \
    i = 0x5f3759df - (i >> 1);                                   \
    y = *(float *)&i;                                            \
	y *= (1.5f - (x2 * y * y));                                  \
    y *= (1.5f - (x2 * y * y));                                  \
    /* Normalizing the vector using the inverse square root. */  \
    (v_p)->x *= y;                                               \
    (v_p)->y *= y;                                               \
} while (0)

#define vec2_add(v1_p, v2) { (v1_p)->x += (v2).x; (v1_p)->y += (v2).y; }
#define vec2_sub(v1_p, v2) { (v1_p)->x -= (v2).x; (v1_p)->y -= (v2).y; }
#define vec2_mult(v_p, s)  {  (v_p)->x *= (s);     (v_p)->y *= (s);    }
#define vec2_div(v_p, s)   {  (v_p)->x /= (s);     (v_p)->y /= (s);    }

#define vec2_eq(v1, v2) ( (v1).x == (v2).x && (v1).y == (v2).y )
#define vec2_ne(v1, v2) ( (v1).x != (v2).x && (v1).y != (v2).y )

#define vec2_gt(v1, v2) ( vec2_len2(v1)  > vec2_len2(v2) )
#define vec2_ge(v1, v2) ( vec2_len2(v1) >= vec2_len2(v2) )
#define vec2_lt(v1, v2) ( vec2_len2(v1)  < vec2_len2(v2) )
#define vec2_le(v1, v2) ( vec2_len2(v1) <= vec2_len2(v2) )

typedef struct
{
    int32_t x;
    int32_t y;
} vec2i_t;

typedef struct {
    float x;
    float y;
} vec2f_t;
