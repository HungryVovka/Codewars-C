// -----------------------------------------------------------
// Task
// Your challenge is to write a function named getSlope/get_slope/GetSlope that calculates the slope of the line through two points.
// 
// Input
// In C, the function get_slope is passed two point structures, each consisting of two double coordinates: x and y.
// 
// double get_slope(point a, point b, bool *is_slope);
// 
// If the line through the two points is vertical or if the same point is given twice, set the pointer *is_slope to false.
// -----------------------------------------------------------

#include <stdbool.h>    // bool, true, false

typedef struct Double_Point_Coordinates {
    double x;
    double y;
} point;

//  *is_slope will be initialized as `true`
//  for non-slope result, set it to `false`

double get_slope(point a, point b, bool *is_slope) {
  double dx, dy, slope;
  
  dx = b.x - a.x;
  dy = b.y - a.y;
  
  if (dx == 0.0){
    *is_slope = false;
    return 0.0;
  }
  
  slope = dy / dx;
  *is_slope = true;
  return slope;
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