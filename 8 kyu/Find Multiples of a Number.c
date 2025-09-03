// -----------------------------------------------------------
// In this simple exercise, you will write a function that takes two integers; n and limit; and returns a list 
// of the multiples of n up to and possibly including limit.
// 
// It is guaranteed that n > 0 and limit >= n.
// 
// For example, if the parameters passed are (2, 6), the function should return [2, 4, 6] as 2, 4, and 
// 6 are the multiples of 2 up to 6.
// 
// Examples
// n = 2; limit = 6 --> [2, 4, 6]
// n = 2; limit = 5 --> [2, 4]
// -----------------------------------------------------------

#include <stddef.h>

typedef unsigned int uint;

void find_multiples(uint n, uint limit, size_t *count, uint multiples[]){
  size_t i = 0;
  uint valore;
  for (valore = n; valore <= limit; valore += n) multiples[i++] = valore;
  *count = i;
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