// -----------------------------------------------------------
// Given 2 elevators (named "left" and "right") in a building with 3 floors (numbered 0 to 2), write a function accepting 3 
// arguments (in order):
// 
// left - The current floor of the left elevator
// right - The current floor of the right elevator
// call - The floor that called an elevator
// It should return the name of the elevator closest to the called floor ("left"/"right").
// 
// In the case where both elevators are equally distant from the called floor, choose the elevator to the right.
// 
// You can assume that the inputs will always be valid integers between 0-2.
// 
// Examples:
// 
// left right call   result
//   0    1     0    "left"
//   0    1     1    "right"
//   0    1     2    "right"
//   0    0     0    "right"
//   0    2     1    "right"
// -----------------------------------------------------------

#include <stdlib.h> // abs

const char* elevator(int left, int right, int call){
  if (abs(call - right) > abs(call - left)) return "left";
  return "right";
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