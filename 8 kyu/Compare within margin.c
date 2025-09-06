// -----------------------------------------------------------
// Create a function close_compare that accepts 3 parameters: a, b, and an optional margin. The function should return 
// whether a is lower than, close to, or higher than b.
// 
// Please note the following:
// 
// When a is close to b, return 0.
// For this challenge, a is considered "close to" b if margin is greater than or equal to the absolute distance between 
// a and b.
// Otherwise...
// 
// When a is less than b, return -1.
// 
// When a is greater than b, return 1.
// 
// If margin is not given, treat it as if it were zero.
// 
// Assume: margin >= 0
// 
// Tip: Some languages have a way to make parameters optional.
// -----------------------------------------------------------

#include <stdlib.h> // abs

int close_compare(int a, int b, int margin){
  if (a == b || margin >= abs(a - b)){
    return 0;
  } else if (a < b){
    return - 1;
  } else {
    return 1;
  }
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