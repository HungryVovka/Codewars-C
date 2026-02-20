// -----------------------------------------------------------
// In this example you have to validate if a user input string is alphanumeric. 
// The given string is not nil/null/NULL/None, so you don't have to check that.
// 
// The string has the following conditions to be alphanumeric:
// 
// At least one character ("" is not valid)
// Allowed characters are uppercase / lowercase latin letters and digits from 0 to 9
// No whitespaces / underscore
// -----------------------------------------------------------

#include <stdbool.h>  // bool
#include <ctype.h>    // isalnum
#include <stddef.h>   // size_t

bool alphanumeric(const char *str_in){
  size_t index;
  if (str_in[0] == '\0') return false;
  index = 0;
  while (str_in[index] != '\0'){
    if (!isalnum((unsigned char)str_in[index])){
      return false;
    }
    index++;
  }
  return true;
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