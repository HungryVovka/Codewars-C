// -----------------------------------------------------------
// An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).
// 
// Note: anagrams are case insensitive
// 
// Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.
// 
// Examples
// "foefet" is an anagram of "toffee"
// 
// "Buckethead" is an anagram of "DeathCubeK"
// -----------------------------------------------------------

#include <stdbool.h>  // bool, true, false
#include <string.h>   // strlen, strcmp
#include <ctype.h>    // tolower
#include <stdlib.h>   // qsort
#include <stddef.h>   // size_t

static int confronto(const void *a, const void *b){
  return (*(const char *)a - *(const char *)b);
}

bool is_anagram(const char *s1, const char *s2){
	size_t lung1 = strlen(s1);
  size_t lung2 = strlen(s2);
  size_t i;
  if (lung1 != lung2) return false;
  
  char copia1[256];
  char copia2[256];
  
  if (lung1 >= sizeof(copia1)) return false;
  
  copia1[lung1] = '\0';
  copia2[lung2] = '\0';
  
  for (i = 0; i < lung1; i++){
    copia1[i] = (char)tolower((unsigned char)s1[i]);
    copia2[i] = (char)tolower((unsigned char)s2[i]);
  }
  
  qsort(copia1, lung1, sizeof(char), confronto);
  qsort(copia2, lung2, sizeof(char), confronto);
  
  return strcmp(copia1, copia2) == 0;
}

// or

#include <stdbool.h>  // bool, true, false
#include <string.h>   // strlen
#include <ctype.h>    // tolower
#include <stddef.h>   // size_t

bool is_anagram(const char *s1, const char *s2){
	size_t lung1;
  size_t lung2;
  int counts[256];
  size_t i;
  unsigned char c;
  
  lung1 = strlen(s1);
  lung2 = strlen(s2);
  
  if (lung1 != lung2) return false;
  
  for (i = 0; i < 256; i++) counts[i] = 0;
  for (i = 0; i< lung1; i++){
    c = (unsigned char)tolower((unsigned char)s1[i]);
    counts[c]++;
  }
  for (i = 0; i< lung2; i++){
    c = (unsigned char)tolower((unsigned char)s2[i]);
    counts[c]--;
  }
  for (i = 0; i < 256; i++){
    if (counts[i] != 0) return false;
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