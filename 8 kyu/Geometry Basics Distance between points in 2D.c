// -----------------------------------------------------------
// This series of katas will introduce you to basics of doing geometry with computers.
// 
// Point objects have attributes x and y.
// 
// Write a function calculating distance between Point a and Point b.
// 
// Tests compare expected result and actual answer with tolerance of 1e-6.
// -----------------------------------------------------------

#include <math.h>

typedef struct Point
{
    double x;
    double y;
} point;

double distance_between_points(point a, point b)
{
    return hypot(a.x - b.x, a.y - b.y);
}