// -----------------------------------------------------------
// Theoretical Material
// 
// You are given two vectors starting from the origin (x=0, y=0) with coordinates (x1,y1) and (x2,y2). Your task is to find out if these vectors are 
// collinear. Collinear vectors are vectors that lie on the same straight line. They can be directed in the same or opposite directions. One vector can be 
// obtained from another by multiplying it by a certain number. In terms of coordinates, vectors (x1, y1) and (x2, y2) are collinear if (x1, y1) = (k*x2, 
// k*y2) , where k is any number acting as a coefficient.
// 
// For more information, check out this article on collinearity (https://www.cuemath.com/geometry/collinear-vectors/).
// 
// Problem Description
// Write the function collinearity(x1, y1, x2, y2), which returns a Boolean type depending on whether the vectors are collinear or not.
// 
// all coordinates are integers
// -1000 <= any coordinate <= 1000
// 
// Notes
// All vectors start from the origin (x=0, y=0).
// Be careful when handling cases where x1, x2, y1, or y2 are zero to avoid division by zero errors.
// A vector with coordinates (0, 0) is collinear to all vectors.
// 
// Examples
// (1,1,1,1) ➞ true
// (1,2,2,4) ➞ true
// (1,1,6,1) ➞ false
// (1,2,-1,-2) ➞ true
// (1,2,1,-2) ➞ false
// (4,0,11,0) ➞ true
// (0,1,6,0) ➞ false
// (4,4,0,4) ➞ false
// (0,0,0,0) ➞ true
// (0,0,1,0) ➞ true
// (5,7,0,0) ➞ true
// -----------------------------------------------------------

#include <stdbool.h>

bool collinearity(int x1, int y1, int x2, int y2)
{
  return x1 * y2 == x2 * y1;
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