// -----------------------------------------------------------
// Task
// Given a point in a Euclidean plane (x and y), return the quadrant the point exists in: 1, 2, 3 or 4 (integer). x and y are non-zero integers, 
// therefore the given point never lies on the axes.
// 
// Examples
// (1, 2)     => 1
// (3, 5)     => 1
// (-10, 100) => 2
// (-1, -9)   => 3
// (19, -56)  => 4
// 
// There are four quadrants:
// 
// 1. First quadrant, the quadrant in the top-right, contains all points with positive X and Y
// 2. Second quadrant, the quadrant in the top-left, contains all points with positive X, but negative Y
// 3. Third quadrant, the quadrant in the bottom-left, contains all points with negative X, but positive Y
// 4. Fourth quadrant, the quadrant in the bottom-right, contains all points with negative X and Y
// 
// More on quadrants: Quadrant (plane geometry) - Wikipedia (https://en.wikipedia.org/wiki/Quadrant_(plane_geometry))
// -----------------------------------------------------------

enum quadrants {I=1, II, III, IV};

enum quadrants quadrant(int x, int y){
  if (x > 0 && y > 0) return 1;
  if (x < 0 && y > 0) return 2;
  if (x < 0 && y < 0) return 3;
  if (x > 0 && y < 0) return 4;
  return 0;
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