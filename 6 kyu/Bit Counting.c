// -----------------------------------------------------------
// Write a function that takes an integer as input, and returns 
// the number of bits that are equal to one in the binary representation of 
// that number. You can guarantee that input is non-negative.
// 
// Example: The binary representation of 1234 is 10011010010, so 
// the function should return 5 in this case
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <math.h>     // floor

size_t countBits(unsigned value){
	size_t bitcount = 0;
  while (value > 0){
    if (value % 2 == 1) bitcount++;
    value = (unsigned)floor((double)value / 2); 
  }
  return bitcount;
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