// -----------------------------------------------------------
// Given a string and an array of indices, rearrange the characters of the string 
// so that each character is placed at the position specified by the corresponding 
// index in the array.
// 
// Example
// input: "abcd", [0, 3, 1, 2]
// output: "acdb"
// Explanation
// The character 'a' is placed at index 0.
// 
// The character 'b' is placed at index 3.
// 
// The character 'c' is placed at index 1.
// 
// The character 'd' is placed at index 2.
// 
// Notes
// The string and the array will be of equal length.
// 
// The string will contain valid characters (A-Z, a-z, or 0-9);
// the array will contain valid indices.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

//  do not allocate memory for the return
//  assign value to pre-allocated *result
//  string is always same length as array

void scramble(size_t length, 
              const char *string, 
              const size_t array[length], 
              char *result){
  size_t i = 0;
  for (; i < length; i++){
    size_t pos = array[i];
    result[pos] = string[i];
  }
  result[length] = '\0';
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