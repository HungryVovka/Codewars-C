// -----------------------------------------------------------
// Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string (alphabetical ascending), the longest possible, containing 
// distinct letters - each taken only once - coming from s1 or s2.
// 
// Examples:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"
// 
// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
// -----------------------------------------------------------

#include <stdlib.h>   // malloc
#include <string.h>   // strlen

char *longest (const char *s1, const char *s2){
// return a nul-terminated, heap-allocated string
  int present[26];
  size_t i;
  char c;
  int count = 0;
  char *answer;
  int pos = 0;
  
  for (i = 0; i < 26; i++) present[i] = 0;
  
  if (s1 != NULL){
    for (i = 0; s1[i] != '\0'; i++){
      c = s1[i];
      if (c >= 'a' && c <= 'z') present[c - 'a'] = 1;
    }
  }
  
  if (s2 != NULL){
    for (i = 0; s2[i] != '\0'; i++){
      c = s2[i];
      if (c >= 'a' && c <= 'z') present[c - 'a'] = 1;
    }
  }
  
  for (i = 0; i < 26; i++){
    if (present[i]) count++;
  }
  
  answer = (char *)malloc((size_t)count + 1);
  if (answer == NULL) return NULL;
  
  for (i = 0; i < 26; i++){
    if (present[i]){
      answer[pos] = (char)('a' + (int)i);
      pos++;
    }
  }
  answer[pos] = '\0';
  return answer;
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