// -----------------------------------------------------------
// Task
// Given the number n, return the sequence of numbers from n to 1.
// 
// 
// Range
// The number n can be negative and also large number:  -9999  <=  n  <=  9999
// 
// 
// Examples
// n =  5    >>     5, 4, 3, 2, 1
// n = -1    >>    -1, 0, 1
// -----------------------------------------------------------

#include <stddef.h>     // size_t

//  don't allocate memory for the final result
//  instead assign values to provided sequence
//  return the length of the resultant outcome

size_t seq_to_one(int n, int sequence[]){
  int current;
  int step;
  size_t i;
  size_t length;
  
  if (n > 1){
    step = -1;
  } else {
    step = 1;
  }
  
  length = (size_t)((n > 1 ? n - 1 : 1 - n) + 1);
  current = n;
  i = 0;
  
  while (1){
    sequence[i] = current;
    i++;
    if (current == 1) break;
    current += step;
  }
  return length;
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