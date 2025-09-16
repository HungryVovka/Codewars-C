// -----------------------------------------------------------
// Determine the total number of digits in the integer (n>=0) given as input to the function. For example, 9 is a single digit, 66 
// has 2 digits and 128685 has 6 digits. Be careful to avoid overflows/underflows.
// 
// All inputs will be valid.
// -----------------------------------------------------------

#include <stdint.h> // uint64_t

int digits(uint64_t n){
  int count = 0;
  if (n == 0) return 1;
  while (n > 0){
    n /= 10;
    count++;
  }
  return count;
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