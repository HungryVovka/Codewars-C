// -----------------------------------------------------------
// The medians of a triangle are the segments that unit the vertices with the midpoint of their opposite sides. The three medians of a triangle intersect 
// at the same point, called the barycenter or the centroid. Given a triangle, defined by the cartesian coordinates of its vertices we need to localize its 
// barycenter or centroid.
// 
// The function bar_triang() or barTriang or bar-triang, receives the coordinates of the three vertices A, B and C  as three different arguments 
// and outputs the coordinates of the barycenter O in an array [xO, yO]
// 
// This is how our asked function should work: the result of the coordinates should be expressed up to four decimals, (rounded result).
// 
// You know that the coordinates of the barycenter are given by the following formulas.
// 
// xO = (xA + xB + xC) / 3
// yO = (yA + yB + yC) / 3
// 
// For additional information about this important point of a triangle see at: (https://en.wikipedia.org/wiki/Centroid)
// 
// Let's see some cases:
// 
// barTriang([4, 6], [12, 4], [10, 10]) ------> [8.6667, 6.6667]
// 
// barTriang([4, 2], [12, 2], [6, 10]) ------> [7.3333, 4.6667]
// 
// The given points form a real or a degenerate triangle but in each case the above formulas can be used.
// 
// Enjoy it and happy coding!!
// -----------------------------------------------------------

#include <math.h>

typedef struct Point_Coordinates {
    double x;
    double y;
} coords;

coords bar_triang(coords a, coords b, coords c){
  coords o;
  o.x = (a.x + b.x + c.x) / 3.0;
  o.y = (a.y + b.y + c.y) / 3.0;
  o.x = round(o.x * 10000.0) / 10000.0;
  o.y = round(o.y * 10000.0) / 10000.0;
  return o;
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
// Copyright (C) 2025 Vladimir Rukavishnikov
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