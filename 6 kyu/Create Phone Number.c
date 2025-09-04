// -----------------------------------------------------------
// Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.
// 
// Example
// create_phone_number(phnum, (const unsigned char[]){1,2,3,4,5,6,7,8,9,0});
//     /* phnum <- "(123) 456-7890" */
// 
// The returned format must be correct in order to complete this challenge.
// 
// Don't forget the space after the closing parentheses!
// -----------------------------------------------------------

#include <stdio.h>
#include <stdint.h>

char *create_phone_number(char phnum[15], const uint8_t digits[10])
{
// write to phnum and return it
// it must be nul-terminated
  sprintf(phnum, "(%u%u%u) %u%u%u-%u%u%u%u",
          digits[0], digits[1], digits[2],
          digits[3], digits[4], digits[5],
          digits[6], digits[7], digits[8], digits[9]);
  return phnum;
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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