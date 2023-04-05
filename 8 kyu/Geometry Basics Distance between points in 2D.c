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

// -----------------------------------------------------------
// License
// Tasks are the property of Codewars (https://www.codewars.com/) 
// and users of this resource.
// 
// All solution code in this repository 
// is the personal property of Vladimir Rukavishnikov
// (vladimirrukavishnikovmail@gmail.com).
// 
// Copyright (C) 2022 Vladimir Rukavishnikov
// 
// This file is part of the HungryVovka/Codewars-C
// (https://github.com/HungryVovka/Codewars-C)
// 
// License is GNU General Public License v3.0
// (https://github.com/HungryVovka/Codewars-C/blob/main/LICENSE)
// 
// You should have received a copy of the GNU General Public License v3.0
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------