// -----------------------------------------------------------
// Two integers are coprimes if the their only greatest common divisor is 1.
// 
// Task
// In this kata you'll be given a number n >= 2 and output a list with all positive integers less 
// than gcd(n, k) == 1, with k being any of the output numbers.
// 
// The list cannot include duplicated entries and has to be sorted.
// 
// Examples
// 2 -> [1]
// 3 -> [1, 2]
// 6 -> [1, 5]
// 10 -> [1, 3, 7, 9]
// 20 -> [1, 3, 7, 9, 11, 13, 17, 19]
// 25 -> [1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 13, 14, 16, 17, 18, 19, 21, 22, 23, 24]
// 30 -> [1, 7, 11, 13, 17, 19, 23, 29]
// -----------------------------------------------------------

// Do not dynamically allocate memory for return
// Assign values to the provided *output array
// It is just large enough to hold the expected answer
// Set *length pointer to size of output array
// Return the output array

#include <stddef.h>   // size_t

static unsigned gcd(unsigned a, unsigned b){
  unsigned x;
  while (b != 0){
    x = a % b;
    a = b;
    b = x;
  }
  return a;
}

unsigned *coprimes(unsigned n, unsigned output[], size_t *length){
  unsigned index = 0;
  unsigned candidate;
  unsigned current_gcd;
  
  for (candidate = 1; candidate < n; candidate++){
    current_gcd = gcd(n, candidate);
    if (current_gcd == 1){
      output[index] = candidate;
      index++;
    }
  }
  *length = (size_t)index;
  return output;
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