// -----------------------------------------------------------
// Description:
// Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is 
// found in the first one.
// 
// If no occurrences can be found, a count of 0 should be returned.
// 
// ("Hello", 'o')  =>  1
// ("Hello", 'l')  =>  2
// ("", 'z')       =>  0
// 
// Notes
// The first argument can be an empty string
// In languages with no distinct character data type, the second argument will be a string of length 1
// -----------------------------------------------------------

#include <stddef.h>

size_t str_count(const char *str, char letter) {
  int count = 0;
  while (*str != '\0'){
    if (*str == letter){
      count++;
    }
    str++;
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