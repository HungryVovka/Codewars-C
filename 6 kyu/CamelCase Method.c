// -----------------------------------------------------------
// Write a method (or function, depending on the language) that converts a string to camelCase, that is, 
// all words must have their first letter capitalized and spaces must be removed.
// 
// Examples (input --> output):
// "hello case" --> "HelloCase"
// "camel case word" --> "CamelCaseWord"
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, realloc, free
#include <ctype.h>    // toupper, isspace

char *camel_case(const char *s){
  char *answer;
  int allocatedSize;
  int currentLength;
  int i;
  int makeUpper;
  
  allocatedSize = 64;
  answer = (char *)malloc(allocatedSize);
  if (answer == NULL) return NULL;
  
  currentLength = 0;
  i = 0;
  makeUpper = 1;
  
  while (s[i] != '\0'){
    if (isspace((unsigned char)s[i])){
      makeUpper = 1;
      i++;
      continue;
    }
    if (currentLength + 2 >= allocatedSize){
      char *newPtr;
      allocatedSize *= 2;
      newPtr = (char *)realloc(answer, allocatedSize);
      if (newPtr == NULL){
        free(answer);
        return NULL;
      }
      answer = newPtr;
    }
    if (makeUpper){
      answer[currentLength++] = (char)toupper((unsigned char)s[i]);
      makeUpper = 0;
    } else {
      answer[currentLength++] = s[i];
    }
    i++;
  }
  answer[currentLength] = '\0';
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