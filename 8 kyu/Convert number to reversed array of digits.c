// -----------------------------------------------------------
// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
// 
// Example (Input => Output):
// 35231 => [1,3,2,5,3]
// 0     => [0]
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out){
  size_t i = 0;
  if (n == 0){
    digits[0] = 0;
    *length_out = 1;
    return;
  }
  while (n){
    digits[i++] = (uint8_t)(n % 10);
    n /= 10;
  }
  *length_out = i;
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