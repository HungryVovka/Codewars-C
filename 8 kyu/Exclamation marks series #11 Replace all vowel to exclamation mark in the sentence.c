// -----------------------------------------------------------
// Description:
// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
// 
// Examples
// "Hi!" --> "H!!"
// "!Hi! Hi!" --> "!H!! H!!"
// "aeiou" --> "!!!!!"
// "ABCDE" --> "!BCD!"
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *replace(const char *s){
// return a heap-allocated string:

  size_t len = strlen(s);
  char *nuova = malloc(len + 1);
  if (!nuova) return NULL;
  size_t i;
  
  for (i = 0; i < len; i++){
    char c = s[i];
    char lower = tolower((unsigned char)c);
    if (lower == 'a' || lower == 'e' ||
       lower == 'i' || lower == 'o'|| lower == 'u'){
      nuova[i] = '!';
      } else {
      nuova[i] = c;
    }
  }
  nuova[len] = '\0';
  return nuova;
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