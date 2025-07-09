// -----------------------------------------------------------
// Task
// Give you two strings: s1 and s2. If they are opposite, return true; otherwise, return false. Note: The result 
// should be a boolean value, instead of a string.
// 
// The opposite means: All letters of the two strings are the same, but the case is opposite. you can assume that the 
// string only contains letters or it's a empty string. Also take note of the edge case - if both strings are empty then you 
// should return false/False.
// 
// Examples (input -> output)
// "ab","AB"     -> true
// "aB","Ab"     -> true
// "aBcd","AbCD" -> true
// "AB","Ab"     -> false
// "",""         -> false
// -----------------------------------------------------------

#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_opposite(const char *s1, const char *s2){
  size_t len1 = strlen(s1), len2 = strlen(s2), i;
  char c1, c2;
  if (len1 == 0 || len1 != len2) return false;
  for (i = 0; i < len1; i++){
    c1 = s1[i];
    c2 = s2[i];
    if (isalpha(c1)){
      if (tolower(c1) != tolower(c2)) return false;
      if (isupper(c1) == isupper(c2)) return false;
    } else {
      if (c1 != c2) return false;
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