// -----------------------------------------------------------
// "Point reflection" or "point symmetry" is a basic concept in geometry where a given point, P, at a given position relative to a 
// mid-point, Q has a corresponding point, P1, which is the same distance from Q but in the opposite direction.
// 
// Task
// Given two points P and Q, output the symmetric point of point P about Q. Each argument is a two-element array of integers 
// representing the point's X and Y coordinates. Output should be in the same format, giving the X and Y coordinates of point 
// P1. You do not have to validate the input.
// 
// This kata was inspired by the Hackerrank challenge Find Point (https://www.hackerrank.com/challenges/find-point)
// -----------------------------------------------------------

typedef struct {
    int x, y;
} point;

point symmetric_point(point p, point q){
  point r;
  r.x = 2.0 * q.x - p.x;
  r.y = 2.0 * q.y - p.y;
  return r;
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