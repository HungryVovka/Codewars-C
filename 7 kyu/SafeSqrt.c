// -----------------------------------------------------------
// Your task is to write safeSqrt function which calculates square root of a number.
// 
// This function should return result as string.
// 
// In case of wrong input (negative number) it should return "invalid input".
// 
// In C, round the result to 1 decimal digit. Your string should be 
// heap-allocated (result will be freed).
// -----------------------------------------------------------

#include <stdlib.h>   // malloc
#include <stdio.h>    // sprintf
#include <math.h>     // sqrt

char *safeSqrt (double x){
  char *answer;
  
  if (x < 0){
    answer = malloc(14);
    if (answer) sprintf(answer, "invalid input");
    return answer;
  }
  // %.1f rounding to 1 decimal place
  answer = malloc(32);
  if (answer) sprintf(answer, "%.1f", sqrt(x));
  return answer;
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