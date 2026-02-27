// -----------------------------------------------------------
// Write the function polygonArea(A,B,C,D) that finds the area of polygons
// 
// Assume D always equals B/2.
// Assume the angles formed by AB and BC are right angles.
// -----------------------------------------------------------

#include <math.h>   // fabs, fmin

double polygon_area(double a, double b, double c, double d) {
  double min_height;
  double height_difference;
  double rectangle_area;
  double trapezoid_area;
  double total_area;
  min_height = fmin(a, c);
  height_difference = fabs(a - c);
  rectangle_area = b * min_height;
  trapezoid_area = b * height_difference / 2.0;
  total_area = rectangle_area + trapezoid_area;
  (void)d;
  return total_area;
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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