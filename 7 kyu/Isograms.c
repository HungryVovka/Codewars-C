// -----------------------------------------------------------
// An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines 
// whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.
// 
// Example: (Input --> Output)
// 
// "Dermatoglyphics" --> true
// "aba" --> false
// "moOse" --> false (ignore letter case)
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <ctype.h> // tolower, isalpha
#include <string.h> // strlen

bool IsIsogram (const char *string){
  int seen[26] = {0};
  size_t lunghezza = strlen(string);
  size_t i = 0;
  for (; i < lunghezza; i++){
    char c = tolower((unsigned char)string[i]);
    if (isalpha((unsigned char)c)){
      int j = c - 'a';
      if (seen[j] > 0) return false;
      seen[j] = 1;
    }
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