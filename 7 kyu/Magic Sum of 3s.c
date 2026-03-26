// -----------------------------------------------------------
// The magic sum of 3s is calculated on an array by summing up odd numbers 
// which include the digit 3.
// 
// Complete the function which accepts an array of integers and returns 
// its magic sum of 3s.
// 
// Example: [3, 12, 5, 8, 30, 13] results in 16 (3 + 13)
// 
// If there is no such number in the array, 0 should be returned.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

unsigned magic_sum(size_t length, const unsigned array[length]){
  size_t i;
  unsigned sum = 0;
  for (i = 0; i < length; i++){
    unsigned num = array[i];
    unsigned has_three = 0;
    if (num % 2 == 0) continue;
    unsigned temp = num;
    while (temp > 0){
      if (temp % 10 == 3){
        has_three = 1;
        break;
      }
      temp /= 10;
    }
    if (has_three) sum += num;
  }
  return sum;
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