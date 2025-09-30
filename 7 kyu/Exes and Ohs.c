// -----------------------------------------------------------
// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The 
// string can contain any char.
// 
// Examples input/output:
// 
// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false
// -----------------------------------------------------------

#include <stdbool.h>  // bool, true, false
#include <ctype.h>    // tolower
#include <stddef.h>   // size_t

bool xo (const char* str){
  int count_x = 0, count_o = 0;
  
  size_t i;
  char c;
  for (i = 0; str[i] != '\0'; i++){
    c = tolower((unsigned char)str[i]);
    if (c == 'x') count_x++;
    if (c == 'o') count_o++;
  }
  return count_x == count_o;
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