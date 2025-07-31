// -----------------------------------------------------------
// Complete the function that calculates the area of the red square, when the length of the circular arc A is given as the input. Return the result 
// rounded to two decimals.
// 
// Graph
// 
// Note: use the π value provided in your language (Math::PI, M_PI, math.pi, etc)
// -----------------------------------------------------------

#include <math.h>
#include <stdio.h>

extern const double PI;

double round2(double value){
  return round(value * 100.0) / 100.0;
}

double square_area(double arc){
  double radius = (arc * 2) / PI;
  double area = radius * radius;
  return round2(area);
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