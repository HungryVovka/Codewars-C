// -----------------------------------------------------------
// Given a string of arbitrary length with any ascii characters. Write a function to 
// determine whether the string contains the whole word "English".
// 
// The order of characters is important -- a string "abcEnglishdef" is correct but 
// "abcnEglishsef" is not correct.
// 
// Upper or lower case letter does not matter -- "eNglisH" is also correct.
// 
// Return value as boolean values, true for the string to contains "English", false for 
// it does not.
// -----------------------------------------------------------

#include <string.h>   // strncpy, strstr
#include <ctype.h>    // tolower
#include <stdbool.h>  // bool, true, false

bool sp_eng(const char* sentence){
  static char buffer[1024];
  strncpy(buffer, sentence, sizeof(buffer));
  buffer[sizeof(buffer) - 1] = '\0';
  int i = 0;
  for (; buffer[i]; i++){
    buffer[i] = tolower(buffer[i]);
  }
  return strstr(buffer, "english") != NULL;
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