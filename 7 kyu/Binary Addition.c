// -----------------------------------------------------------
// Implement a function that adds two numbers together and returns their sum in 
// binary. The conversion can be done before, or after the addition.
// 
// The binary number returned should be a string.
// 
// Examples:(Input1, Input2 --> Output (explanation)))
// 
// 1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
// 5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)
// -----------------------------------------------------------

#include <stddef.h>     // size_t

char *binary_add (unsigned a, unsigned b, char *binary){
// write to the binary string and return it
  unsigned long long sum = (unsigned long long)a + (unsigned long long)b;
  size_t write_index = 0;
  size_t bit_count;
  unsigned long long temp;
  
  if (sum == 0){
    binary[0] = '0';
    binary[1] = '\0';
    return binary;
  }
  
  temp = sum;
  bit_count = 0;
  while (temp > 0ULL){
    bit_count++;
    temp >>= 1;
  }
  
  binary[bit_count] = '\0';
  write_index = bit_count;
  
  while (sum > 0ULL){
    write_index--;
    binary[write_index] = (sum & 1ULL) ? '1' : '0';
    sum >>= 1;
  }
  return binary;
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